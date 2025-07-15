#include <stdio.h>

int triangulo(int lado1, int lado2, int lado3, int *perimetro, int *area, int *triangulo);

int main(void)
{
    int peri = 0;
    int ari = 0;
    int tria = 0;
    int hola = triangulo(10, 15, 20, &peri, &ari, &tria);

    printf("Es traingulo? %d\n", hola);
    printf("Perimetro: %d\n", peri);
    printf("Area: %d\n", ari);
    printf("Es un triangulo %d\n", tria);
}

int triangulo(int lado1, int lado2, int lado3, int *perimetro, int *area, int *triangulo)
{
    int ret = 0;

    if((lado1 > 0) && (lado2 > 0) && (lado3 > 0))
    {

        if((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3))
        {
            *triangulo = 0;
        }
        else if( ((lado1 != lado2) && (lado2 != lado3) && (lado1 == lado3)) || ((lado1 == lado2) && (lado2 != lado3) && (lado1 != lado3)) )
        {
            *triangulo = 1;
        }
        else{
            *triangulo = 2;
        }


        *perimetro = lado1 + lado2 + lado3;


        *area = (lado1 * lado2)/ 2;

        ret = 1;
    }
    else
    {
        ret = 0;
    }

    return ret;
}


