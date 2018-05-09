#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// função que imprime a matriz
void imprime1( double **M, int dim)
{
	printf("\n");
	for(int i=0;i<dim;i++) 
	{	for(int j=0;j<dim+1;j++) 
			
			printf("%3f ",M[i][j]);	  
		
		puts("");
	}		
	printf("\n*******************************\n");
}
