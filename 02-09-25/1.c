#include <stdio.h>
int main()
{
	int x,i=1,j;
	printf("Enter a number:");
	scanf("%d",&x);
	while(i<=x)
	{ j=1;
	printf("\n");
        while (j<=x)
	{
		printf("%d  ",i*j);
        j++;
	}
	i++;
	}
	return 0;
}          
