#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main()
{
    int a;
    scanf("%d",&a);
    printf("%ld",factorial(a));
    printf("\n e a la %d es %lf",a,ePowX(a,0.00001));
    printf("\nla raiz cuadrada de %d es %lf\n",a,raizCuadrada((unsigned)a,0));
    if(esFibonacci(a)==VERDADERO)
        printf("pertenece a la serie de fibonacci\n");
    else
        printf("no pertenece a la serie de nada\n");
    if(perfectoDeficienteAbundante(a)<0)
        printf("\nAbundante");
    else
    {
        if(perfectoDeficienteAbundante(a)>0)
            printf("\nDeficiente");
        else
            printf("\nPerfecto");
    }
    if(esPrimo(a)>0)
        printf("\nNo es primo");
    else
        printf("\nEs primo");

    return 0;
}
