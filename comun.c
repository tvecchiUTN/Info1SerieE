#include <stdio.h>
#include <math.h>
#include "comun.h"


int perimetro(int lado1, int lado2, int lado3)
{
    int ret = lado1 + lado2 + lado3;

    return ret;
}

int tipoTria(int lado1, int lado2, int lado3)
{
    int ret = ERR;

    int lados1y2 = (lado1 == lado2);
    int lados1y3 = (lado1 == lado3);
    int lados2y3 = (lado2 == lado3);

    if(lados1y2 && lados1y3 && lados2y3)
    {
        ret = EQUILATERO;
    }
    else if( (!lados1y2 && !lados1y3 && lados2y3) || (lados1y2 && !lados1y3 && !lados2y3) || (!lados1y2 && lados1y3 && !lados2y3) )
    {
        ret = ISOSCELES;
    }
    else if((!lados1y2 && !lados1y3 && !lados2y3))
    {
        ret = ESCALENO;
    }

    return ret;
}

int areaTria(int lado1, int lado2, int lado3)
{
    int semiperi = (lado1 + lado2 + lado3) / 2;

    double aux = (semiperi-lado1) * (semiperi-lado2) * (semiperi-lado3) * semiperi;

    double ret = sqrt(aux);

    return (int) ret;
}
