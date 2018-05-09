#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void jacobi(double **M,int dim)
{
	int i,j, iteracoes=0;
	double b[dim],x0[dim],x[dim],soma,max;
	
	for(i=0; i<dim; i++)
	{
		x[i]=0;
		b[i] = M[i][dim];
	}
	do
	{
		max=0;
	
		for(i=0; i<dim; i++)
			x0[i] = x[i];
		
		/*memcpy(x0,x, 4*sizeof(double));*/ // pode usar ou o for acima, ou essa função
			
		for(i=0; i<dim; i++)
		{
			soma = 0.0;	
			for(j=0; j<dim; j++) // somatório 
			{
				if(j!=i)
				soma=soma+(M[i][j]*x0[j]);
			}
	
			x[i] = (1/M[i][i]) * (b[i] - soma); //xk na fórmula
			max =max +(fabs(x0[i]-x[i]) / fabs(x[i]));
		}
		iteracoes ++;
	}while(max > 1e-5);
	
	printf("\nVetor B:\n");
	for(i=0; i<dim; i++)
		printf("%lf\t",b[i]);
	printf("\n");
	printf("\nVetor X:\n");
	for(i=0; i<dim; i++)
		printf("%.2lf\t",x[i]);
	printf("\n");
	printf("\nNúmero de iterações: %d\n\n",iteracoes);
}

