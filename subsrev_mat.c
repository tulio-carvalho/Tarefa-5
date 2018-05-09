#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void subsreversa(double **M, double* raizes, int dim)
{
	double x[dim], soma[dim], auxiliar;
	int i, j;
	
	for(i=dim-1;i>=0;i--)
	{
		soma[i]=0;
		
		for(j=i;j<=dim;j++)
		{
			soma[i]=soma[i]+M[i][j-1]*raizes[j-1];
		}
		
		auxiliar=M[i][dim];
		x[i]=auxiliar-soma[i];
		raizes[i]=x[i]/M[i][i];
	}	
}
