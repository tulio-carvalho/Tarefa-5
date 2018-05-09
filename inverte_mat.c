#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void inversa (double **M,int dim)
{
	int l,c;
	double x[dim],p,s=0.0;
	

	
	p = M[dim-1][dim];
	

	x[dim] = p / M[dim-1][(dim-1)];
	

	
	for(l=dim-1; l>=0; l--)
	{
	p = M[l][dim];
	
	for(c=l+1; c<(dim+1); c++)
	s = s + (M[l][c]*x[c]);
	
	x[l] = (p - s)/M[l][l];
	
	s = 0;
	}
	
	
	printf("\nSolução do Sistema\n");
	for(l=0; l<(dim+1); l++)
	
	printf("\nX%d = %lf\t", l+1, x[l]);
	printf("\n");
}
