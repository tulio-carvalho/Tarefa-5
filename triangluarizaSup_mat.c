#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Função para trocar as linhas da matriz
void troca(double *M1, double *M2, int dim)
{	double *m; // matriz auxiliar
	int i;
	
	m= (double*)malloc((dim+1)*sizeof(double));
	
	for(i=0;i<=dim;i++)
	{	m[i] = M1[i];
		M1[i] = M2[i];
		M2[i] = m[i];
	}
}
// função triangular superior
double **triangsup(double **M, int dim) 
{
	int i,j,k,l,v;
	double auxiliar; // variável auxiliar para calculo dos passos da triangularização
	v=-1;
	
	for(k=0;k<dim;k++) 
	{
		for (l=k+1;l<dim;l++)
		{
			if(M[k][k]<fabs(M[l][k]));
				v=1;
			if(v!=-1)
				troca(M[k],M[v],dim);
			
			for(i=k+1;i<dim;i++)
			{	
			 	auxiliar=(M[i][k]/M[k][k]);
 			 	for(j=k;j<=dim;j++)
 			 	{
 			 		M[i][j]=M[i][j]-(auxiliar*M[k][j]);
 			 	}
			}
		}
		v=-1;
	}
	return M;
}
