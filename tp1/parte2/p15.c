/*
    15. 
    Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
    utilizando una estructura "while".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero = 1000;

    while (numero <= 9999) {
        printf("%i ", numero);
        numero++;
    }

    return 0;
}
