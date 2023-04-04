/*
    16. 
    Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
    utilizando una estructura "for".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;

    for (numero = 1000; numero <= 9999; numero++) {
        printf("%i ", numero);
    }

    return 0;
}
