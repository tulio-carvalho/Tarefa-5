#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

FILE *fp;

//Função para ler a matriz do arquivo
double **leitura( char *matriz, int *dim)
{
        int  i, j;
        double **M;
        float a;
        fp = fopen(matriz,"r");
        i = fscanf(fp,"%d",dim);

        M = malloc( *dim *sizeof(double *));
        for(i=0; i<*dim; i++)
        {
                M[i]= malloc((*dim+1)*sizeof(double));
        }
        i =0;
        j = 0;

        while (fscanf(fp,"%f",&a)!= EOF)
        {
                M[i][j]=a;
                j++;
                if (j== *dim+1)
                {
                        j= 0;
                        i++;
                }
        }

        return (M);
        
        fclose(fp);
}
