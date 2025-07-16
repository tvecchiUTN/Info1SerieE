#ifndef __COMUN_H
#define __COMUN_H

#define SI 1
#define NO 0
#define ERR -1

#define ESCALENO 0
#define ISOSCELES 1
#define EQUILATERO 2

int perimetro(int lado1, int lado2, int lado3);
int tipoTria(int lado1, int lado2, int lado3);
int areaTria(int lado1, int lado2, int lado3);

#endif
