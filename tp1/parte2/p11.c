/*
    11. 
    Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura "do while".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero = 1;

    do {
        if (numero % 2 == 0) {
            printf("%i ", numero);
        }
        numero++;
    } while (numero <= 40);

    return 0;
}
