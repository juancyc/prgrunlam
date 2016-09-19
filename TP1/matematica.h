#ifndef MATEMATICA_H_INCLUDED
#define MATEMATICA_H_INCLUDED
#define VERDADERO 1
#define FALSO 0

#include <stdio.h>

long factorial(int n);
long combinatorio(int m, int n);
double ePowX(int x, float tol);
double raizCuadrada(unsigned int a, float tol);
int esFibonacci(int n);
int perfectoDeficienteAbundante(int n);

int esPrimo(int n);

#endif // MATEMATICA_H_INCLUDED
