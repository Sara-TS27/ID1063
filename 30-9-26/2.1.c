#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generates 'len' uniform random numbers between 0 and 1 and saves them to a file
void uniform(char *str, int len) 
{
    FILE *fp = fopen(str, "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return;
    }

    for (int i = 0; i < len; i++) {
        fprintf(fp, "%lf\n", (double)rand() / RAND_MAX);
    }

    fclose(fp);
}

int main(void) 
{
    int n;

    // Seed the random number generator
    srand(time(NULL));

    // 1. Get input size from user (fflush forces text to show immediately)
    printf("Enter the size of vector (n): ");
    fflush(stdout);

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // 2. Generate n random uniform numbers into "uni.dat"
    uniform("uni.dat", n);

    // 3. Read from file and convert uniform values to binary (0 or 1)
    FILE *fp = fopen("uni.dat", "r");
    if (fp == NULL) {
        printf("Error opening uni.dat file.\n");
        return 1;
    }

    double u;
    printf("\nRandom Binary Vector of size %d:\n[ ", n);

    for (int i = 0; i < n; i++) {
        if (fscanf(fp, "%lf", &u) == 1) {
            if (u >= 0.5) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
    }
    printf("]\n");

    fclose(fp);
    return 0;
}

