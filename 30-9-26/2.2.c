// Code by Sara
// Date: 30/09/2026
#include <stdio.h>
#include <stdlib.h>
#include "coeffs.h"

void binaryMatrix(int n, int m)
{
    double x;

    // Generate total (n * m) random numbers using uniform() function
    uniform("binary.dat", n * m);

    FILE *fp = fopen("binary.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Outer loop for rows, inner loop for columns
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n"); // Print a new line after each row
    }

    fclose(fp);
}

int main()
{
    int n, m;
    // Read the dimensions of the matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("\n Binary Matrix:\n",);
    binaryMatrix(n, m);

    return 0;
}
