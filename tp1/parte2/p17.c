/*
    17. 
    Ingresar números, hasta que se ingrese un valor igual a cero, luego presentar por pantalla la
    cantidad de números ingresados.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, cantidad = 0;

    do {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            cantidad++;
        }
    } while (numero != 0);

    printf("\nLa cantidad de numeros ingresados es: %i", cantidad);

    return 0;
}
