#include "complejo.h"
#include <stdio.h>

COMPLEJO asigna_real(COMPLEJO c, double real) {
    c.real = real;
    return c;
}

COMPLEJO asigna_imaginario(COMPLEJO c, double imaginario) {
    c.imaginario = imaginario;
    return c;
}

double parte_real(COMPLEJO c) {
    return c.real;
}

double parte_imaginaria(COMPLEJO c) {
    return c.imaginario;
}

double modulo_complejo(COMPLEJO c) {
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

COMPLEJO suma(COMPLEJO c1, COMPLEJO c2) {
    COMPLEJO resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

void imprimir_complejo(COMPLEJO c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginario);
}
