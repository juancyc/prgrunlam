#include "fecha.h"

//EJ 14
int esFechaValida(tFecha f)
{
    static int cantDiasMes[][12] = { {31,28,31,30,31,30,31,31,30,31,30,31} , {31,29,31,30,31,30,31,31,30,31,30,31} };
    if(f.a>1600)
    {
        if(f.m>=1 && f.m<=12)
        {
            if(f.d>=1 && f.d<=cantDiasMes[esBisiesto(f.a)][f.m])
                return 1;
        }
    }
    return 0;
}

//EJ 15
tFecha tomorrow(tFecha f)
{
    static int cantDiasMes[][12] = { {31,28,31,30,31,30,31,31,30,31,30,31} , {31,29,31,30,31,30,31,31,30,31,30,31} };
    f.d++;
    if(f.d>cantDiasMes[esBisiesto(f.a)][f.m])
    {
        f.d=1;
        f.m++;
        if(f.m>12)
        {
            f.m=1;
            f.a++;
        }
    }
    return f;
}
