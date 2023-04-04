/*
    3. 
    Ingresar un número entero, luego presentar por pantalla un mensaje indicando si dicho
    número es igual a cero, positivo o negativo.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("\nEl numero es igual a cero");
    } else if (numero > 0) {
        printf("\nEl numero es positivo");
    } else {
        printf("\nEl numero es negativo");
    }

    return 0;
}
