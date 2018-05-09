/*
 * liblinalg.h
 * 
 * Copyright 2018 Tulio Carvalho <tulio@tulio-carvalho>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#ifndef linalg_h__
#define linalg_h__

extern double **leitura(char *mariz, int *dim);

extern void imprime1(double **M, int dim);

extern double **triangsup(double **M, int dim);

extern void subsreversa(double **M, double *raizes, int dim);

extern void determinante(double **M, int dim, int cont);

extern void **inversa(double **M, double *X, int diml, int dimc);

extern double **multiplica(double **A, double **B, int dim);

extern void jacobi(double **M, int dim);

#endif //linalg_h__

