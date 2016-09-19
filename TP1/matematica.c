#include "matematica.h"

//EJ 1
long factorial(int n)
{
    if (n==0)
        return 1;

    long f = n,
        mul = n-1;
    while (mul > 0)
    {
        f*=mul;
        mul--;
    }
    return f;
}

//EJ 2
long combinatorio(int m, int n)
{
    return factorial(m) / ( factorial(n) * factorial(m-n) );
}

//EJ 3
double ePowX(int x, float tol)
{
    double e=1, ter=1;
    int i=1,xAux=x;
    while(ter>tol)
    {
        ter= (double)x / factorial(i);
        e+=ter;
        x*=xAux;
        i++;
    }
    return e;
}

//EJ 4
double raizCuadrada(unsigned int a, float tol)
{
    double rAnt=1, rAct=1;
    while( tol >= (rAct-rAnt) )
    {
        rAnt = rAct;
        rAct = ( rAnt + (double)a / rAnt )/2;
    }
    return rAct;
}

//EJ 6
int esFibonacci(int n)
{
    int ter1, ter2=1, ter3=1;

    while(n>=ter3)
    {
        if(n==ter3)
            return VERDADERO;
        ter1=ter2;
        ter2=ter3;
        ter3=ter1+ter2;
    }
    return FALSO;
}

//EJ 7
int perfectoDeficienteAbundante(int n)
{
    int i=n-1,sum=0;
    while(i>0)
    {
        if(n%i==0)
            sum+=i;
        i--;
        printf("\nLa suma da %d",sum);
    }

    return sum-n;
}

//EJ 8

//EJ 13
int esPrimo(int n)
{
    int m=n-1,divisores=0;
    while(m>1)
    {
        divisores+= (n%m==0);
        m--;
        printf("\ncant divisores %d m %d",divisores,m);
    }
    return divisores;
}
