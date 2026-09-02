#include <stdio.h>
#include <stdlib.h>
#include "libs/matfun.h"

int main()
{
    int n, i;

    printf("Length of vector: ");
    scanf("%d", &n);

    // Create two column vectors of size n x 1
    double **A = createMat(n, 1);
    double **B = createMat(n, 1);

    printf("Enter values for vector A:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%lf", &A[i][0]);
    }

    printf("Enter values for vector B:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%lf", &B[i][0]);
    }

    // Transpose A: n x 1 becomes 1 x n
    double **AT = transposeMat(A, n, 1);

    // Matrix multiplication: (1 x n) × (n x 1)
    double **D = Matmul(AT, B, 1, n, 1);

    printf("Dot product = %lf\n", D[0][0]);

    freeMat(A, n);
    freeMat(B, n);
    freeMat(AT, 1);
    freeMat(D, 1);

    return 0;
}
