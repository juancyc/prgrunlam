#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <stdio.h>

#define esBisiesto(X) (X)%400 ? 1 : (X)%100 ? 0 : (X)%4 ? 1 : 0

//EJ 13
typedef struct
{
    int d,
        m,
        a;
}tFecha;

int esFechaValida(tFecha f);
tFecha tomorrow(tFecha f);
#endif // FECHA_H_INCLUDED
