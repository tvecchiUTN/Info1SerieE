#include <stdio.h>
#include "funciones.h"
#include "comun.h"

int triangulo(int cat1, int cat2, int hipo, int *tipo, int *peri, int *area)
{
    int ret = NO;

    if(cat1 && cat2 && hipo)
    {
        if(cat1 < 0)
        {
            cat1 = cat1 * (-1);
        }
        if(cat2 < 0)
        {
            cat2 = cat2 * (-1);
        }
        if(hipo < 0)
        {
            hipo = hipo * (-1);
        }

        *tipo = tipoTria(cat1, cat2, hipo);
        *peri = perimetro(cat1, cat2, hipo);
        *area = areaTria(cat1, cat2, hipo);


        ret = SI;
    }
    else{
        *tipo = ERR;
        *peri = ERR;
        *area = ERR;
    }

    return ret;
}

int trianguloOpcional(int cat1, int cat2, int hipo, int *tipo, int *peri, int *area)
{
    int ret = NO;

    if(cat1 && cat2 && hipo)
    {
        if(cat1 < 0)
        {
            cat1 = cat1 * (-1);
        }
        if(cat2 < 0)
        {
            cat2 = cat2 * (-1);
        }
        if(hipo < 0)
        {
            hipo = hipo * (-1);
        }

        if(tipo != NULL)
        {
            *tipo = tipoTria(cat1, cat2, hipo);
        }
        if(peri != NULL)
        {
            *peri = perimetro(cat1, cat2, hipo);
        }
        if(area != NULL)
        {
            *area = areaTria(cat1, cat2, hipo);
        }

        ret = SI;
    }
    else
    {
        if(tipo != NULL)
        {
            *tipo = ERR;
        }
        if(peri != NULL)
        {
            *peri = ERR;
        }
        if(area != NULL)
        {
            *area = ERR;
        }
    }

    return ret;
}

