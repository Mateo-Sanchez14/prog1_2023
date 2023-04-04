/*
    13. 
    Ingresar un número, luego presentar por pantalla el factorial del mismo.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, factorial = 1;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 0);

    while (numero > 0) {
        factorial *= numero;
        numero--;
    }

    printf("\nEl factorial del numero ingresado es: %i", factorial);

    return 0;
}
