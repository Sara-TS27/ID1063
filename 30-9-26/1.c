#include <stdio.h>
double **Matmul(double **a, double **b, int m, int n, int p)
{
int i, j, k;
double **c, temp =0;
c = createMat(m,p);
for(i=0;i<m;i++)
{
  for(k=0;k<p;k++)
{                                                                                                                                   for(j=0;j<n;j++)
	{
       temp= temp+a[i][j]*b[j][k];
 	 }
        c[i][k]=temp;
temp = 0;
}
  }
return c;
}

