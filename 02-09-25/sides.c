#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "/data/data/com.termux/files/home/cprog/codes/msoft/libs/matfun.h"

int main()
{
    int n, i;

    printf("Enter length: ");
    scanf("%d", &n);

    FILE *fa = fopen("a.txt", "r");
    FILE *fb = fopen("b.txt", "r");

    double **A = createMat(n, 1);
    double **B = createMat(n, 1);

    for(i = 0; i < n; i++)
    {
        fscanf(fa, "%lf", &A[i][0]);
    }

    for(i = 0; i < n; i++)
    {
        fscanf(fb, "%lf", &B[i][0]);
    }

    double **AT = transposeMat(A, n, 1);
    double **D = Matmul(AT, B, 1, n, 1);

    printf("Dot product = %lf\n", D[0][0]);

    fclose(fa);
    fclose(fb);

    freeMat(A, n);
    freeMat(B, n);
    freeMat(AT, 1);
    freeMat(D, 1);

    return 0;
}
