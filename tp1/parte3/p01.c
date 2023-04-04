/*
    1. 
    Leer un carácter por teclado y luego presentar por pantalla un mensaje con la siguiente
    leyenda "El carácter es ...(mostrar el carácter ingresado)".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);
    printf("\nEl caracter es %c", caracter);

    return 0;
}
