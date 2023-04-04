/*
    4.
    Ingresar N caracteres, luego presentar por pantalla la cantidad de vocales.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int cantidadCaracteres = 0;
    int cantidadVocales = 0;
    char caracter;

    do {
        printf("Ingrese la cantidad de caracteres: ");
        scanf("%d", &cantidadCaracteres);
        fgetc(stdin);
    } while (cantidadCaracteres <= 0);

    for (int i = 0; i < cantidadCaracteres; i++) {
        printf("Ingrese un caracter: ");
        scanf("%c", &caracter);
        while (fgetc(stdin) != '\n');

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cantidadVocales++;
        }
    }

    printf("\nLa cantidad de vocales es %d", cantidadVocales);

    return 0;
}
