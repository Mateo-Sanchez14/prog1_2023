/*
    20. 
    Definir una estructura cuyos campos permitan guardar la cantidad de caracteres que sean
    vocales y la cantidad que sean consonantes. Luego debe ingresar N caracteres, y contabilizar en
    la estructura definida los caracteres de acuerdo a su tipo (vocales o consonantes).
*/

#include <stdio.h>

struct caracteres {
    int vocales;
    int consonantes;
};

int main(int argc, char const *argv[]) {
    struct caracteres c = {0, 0};
    int cantidadCaracteres;
    char caracter;

    do {
        printf("Ingrese la cantidad N de caracteres: ");
        scanf("%d", &cantidadCaracteres);
    } while (cantidadCaracteres < 1);

    for (int i = 0; i < cantidadCaracteres; i++) {

        do {
            printf("Ingrese el caracter %d: ", i + 1);
            scanf("%c", &caracter);
            while (fgetc(stdin) != '\n');
        } while ((caracter < 'a' || caracter > 'z'));

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            c.vocales++;
        } else {
            c.consonantes++;
        }
    }

    printf("\nCantidad de vocales: %d", c.vocales);
    printf("\nCantidad de consonantes: %d", c.consonantes);

    return 0;
}
