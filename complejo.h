#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

#include <math.h>

typedef struct {
    double real;
    double imaginario;
} COMPLEJO;

COMPLEJO asigna_real(COMPLEJO c, double real);
COMPLEJO asigna_imaginario(COMPLEJO c, double imaginario);
double parte_real(COMPLEJO c);
double parte_imaginaria(COMPLEJO c);
double modulo_complejo(COMPLEJO c);
COMPLEJO suma(COMPLEJO c1, COMPLEJO c2);
void imprimir_complejo(COMPLEJO c);

#endif
