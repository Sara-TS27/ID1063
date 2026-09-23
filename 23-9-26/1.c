#include <stdio.h>
#include <math.h>
double norm(double a[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * a[i];
    }

    return sqrt(sum);
}

double rms(double a[], int n)
{
    return norm(a, n) / sqrt(n);
}

int main()
{
    double a[] = {3, 4, 0, 5};
    int n = 4;

    printf("For the array {3,4,0,5}: %.2f\n", rms(a, n));
    double  b[] = {1,-1,1,-1};
    n = 4;
     printf("For the array {-1,1,-1,1}: %.2f\n", rms(b, n));

    double c[] = {7.5};
    n=1;
    printf("For the array {7.5}: %.2f\n", rms(c, n));    
    return 0;
}
