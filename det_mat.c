#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void determinante ( double **M, int dim, int cont)
{
	int l;
	double det = 1;
	
	for(l=0; l<dim; l++)
	
	det *= M[l][l];
	
	
	if(cont % 2 == 0)
 		printf("%.1lf \n", det);
 	else
		printf("%.1lf \n", -1.0 * det);
 
}


