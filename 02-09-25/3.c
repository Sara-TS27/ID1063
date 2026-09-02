#include <stdio.h>
int main() 
{
int n,i;
int a[100],k[10]={0};
printf("Enter number of values: ");  
scanf("%d",&n); 
printf("Enter the values: ");  
for (i=0; i<n;i++)
{  
    scanf("%d",&a[i]);  
    k[a[i]]++;  
}  
for (i=0;i<10;i++)
{  
    printf("%d: %d\n",i,k[i]);  
}  
return 0;
}  
