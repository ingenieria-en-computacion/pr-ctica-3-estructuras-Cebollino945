#include <stdio.h>
#include "complejo.h"

int main() {
    COMPLEJO c1, c2, resultado;

    
    c1 = asigna_real(c1, 3);
    c1 = asigna_imaginario(c1, 7);

    c2 = asigna_real(c2, 1);
    c2 = asigna_imaginario(c2, 11);

    
    printf("Numero complejo 1: ");
    imprimir_complejo(c1);
    
    printf("Numero complejo 2: ");
    imprimir_complejo(c2);

    
    resultado = suma(c1, c2);
    printf("Suma de los complejos: ");
    imprimir_complejo(resultado);

    
    printf("Modulo de c1: %.2f\n", modulo_complejo(c1));
    printf("Modulo de c2: %.2f\n", modulo_complejo(c2));

    return 0;
}
