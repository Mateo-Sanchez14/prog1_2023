/*
    14. 
    Ingresar un número positivo, luego presentar por pantalla el número ingresado y su
    invertido. Ejemplo: si se ingresa el número 5219 -> el invertido es 9125
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, invertido = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 0);

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }

    printf("\nEl numero invertido es: %i", invertido);

    return 0;
}
