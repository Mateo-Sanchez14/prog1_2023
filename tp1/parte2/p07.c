/*
    7. 
    Dado un número entero no negativo, presentar por pantalla un mensaje indicando si dicho
    número es par o impar.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;

    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("\nEl numero ingresado es negativo");
    } else {
        if (numero % 2 == 0) {
            printf("\nEl numero %i es par", numero);
        } else {
            printf("\nEl numero %i es impar", numero);
        }
    }

    return 0;
}
