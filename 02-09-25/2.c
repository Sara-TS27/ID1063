#include <stdio.h>
int main()
{
    int x,i;
    float a[100], b[100], d = 0;
    printf("Length of array: ");
    scanf("%d",&x);
    printf("Enter values for vector a: ");
    for(i=0;i<x;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("Enter values for vector b: ");
    for(i=0;i<x;i++)
    {
        scanf("%f",&b[i]);
    }
    for(i=0;i<x;i++)
    {
        d=d+a[i]*b[i];
    }
    printf("dot pdt = %f\n", d);
    return 0;
}
