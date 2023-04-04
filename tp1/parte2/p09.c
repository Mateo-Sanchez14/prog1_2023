/*
    9. 
    Presentar por pantalla los números del 1 al 40 utilizando una estructura "while".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero = 1;

    while (numero <= 40) {
        printf("%i ", numero);
        numero++;
    }

    return 0;
}
