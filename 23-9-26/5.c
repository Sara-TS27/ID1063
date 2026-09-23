//code by Sara//
//date 23-9-26//
#include <stdio.h>

int main() {
    int m,n,t;
    printf("enter values of m and n (should be between 1 to 100):  ");
    scanf("%d %d", &m, &n);
    //condition for checking if the values of m and n are valid//
    if (m<1 || m>100 && n<1 || n>100)
    {
	    printf("error");
    }
    printf("Enter the value of threshold: ");
    scanf("%d",&t);

    printf("Input: ");
    
    //making a matirx //
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
	{
		//condition for threshold//
            int pxl;
            scanf("%d", &pxl);
            if (pxl >= t) 
	    {
                printf("255 ");
            }
	    else
	    {
                printf("0 ");
            }
        }
     printf("\n");
    }

    return 0;
}

