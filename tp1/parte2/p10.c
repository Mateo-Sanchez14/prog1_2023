/*
    10. 
    Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura "for".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;

    for (numero = 1; numero <= 40; numero++) {
        if (numero % 2 == 0) {
            printf("%i ", numero);
        }
    }

    return 0;
}
