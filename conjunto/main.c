#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUNTO c,d,e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    printf_conjunto(c);
    printf_conjunto(d);
    printf_conjunto(e);


    printf("El conjunto c està vacìo %d\n", es_vacio(c));
    c= agregar (c, 2);
    c= agregar (c, 3);
    c= agregar (c, 19);
    c= agregar (c, 11);
    c= agregar (c, 15);

    d= agregar (d, 12);
    d= agregar (d, 22);
    d= agregar (d, 32);
    d= agregar (d, 2);

    e = _union(c,d);
    printf_conjunto(e);

    return 0;

}

