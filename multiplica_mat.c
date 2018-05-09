#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

double multiplica(double **A, double **B,int dim)
{
	double C[dim][dim],soma,aux;
	int i, j,r;
	
	for(i=0;i<dim;i++)
	{
		soma=0;
		for(j=0;j<dim;j++)
		{
			for(r=0;r<dim;r++)
			{
				
				aux=A[i][r]*B[r][j];
				soma=soma+aux;
			}
		}
		C[i][j]=soma;
	}
	dim=i+1;
	return (C,dim);
}
