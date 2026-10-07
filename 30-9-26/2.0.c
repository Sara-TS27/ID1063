#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void uniform(char *str, int len)
{
    int i;
    FILE *fp;

    fp = fopen(str,"w");
    //Generate numbers
    for (i = 0; i < len; i++)
    {
        fprintf(fp,"%lf\n",(double)rand()/RAND_MAX);
    }
    fclose(fp);
}

void binaryMatrix(int m, int n)
{
    double x;

    //Generate m * n total numbers
    uniform("binary.dat", m * n);

    FILE *fp = fopen("binary.dat", "r");

    //Nested loop for matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n"); 
    }

    fclose(fp);
}

int main(){
    srand(time(NULL));
    int m, n;

    // 3. Read both m and n
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    binaryMatrix(m, n);

    return 0;
}

