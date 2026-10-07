#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void uniform(char *str, int len)
{
    int i;
    FILE *fp;

    fp = fopen(str, "w");
    // Generate numbers
    for (i = 0; i < len; i++)
    {
        fprintf(fp, "%lf\n", (double)(rand() % 100 + 1));
    }
    fclose(fp);
}

void binaryVector(int n)
{
    // Generate n random numbers using uniform() function
    uniform("binary.dat", n);

    FILE *fp = fopen("binary.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    double arr[n];

    // Read generated values into the array and print original array
    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &arr[i]);
        printf("%0.1lf ", arr[i]);
    }
    printf("\n");

    fclose(fp); 
    // 1. Pointer to track the chest with the fewest coins
    double *min_ptr	 = &arr[0];

    // 2. Scan the array to find the minimum element using pointer
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min_ptr)
        {
            min_ptr = &arr[i];
        }
    }

    // 3. Remove all coins from cursed chest by setting its value to 0
    *min_ptr = 0.0;

    // 4. Print the updated array
    printf("Updated Array (Cursed chest set to 0):\n");
    for (int i = 0; i < n; i++)
    {
        printf("%0.1lf ", arr[i]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    printf("Enter n ");
    int n;
    scanf("%d", &n);
    binaryVector(n);
    return 0;
}

