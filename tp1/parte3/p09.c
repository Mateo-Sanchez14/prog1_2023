/*
    9. 
    Dado un número natural de 4 o más dígitos(realizar este control), presentar por pantalla
    el número y su invertido. Ejemplo : número = 34256, invertido = 65243
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, invertido = 0;

    do {
        printf("Ingrese un numero natural de 4 o mas digitos: ");
        scanf("%d", &numero);
    } while (numero < 1000);

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
        // numero /= 10;
    }

    printf("\nEl numero invertido es: %d", invertido);

    return 0;
}
