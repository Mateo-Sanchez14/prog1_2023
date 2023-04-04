/*
    8. 
    Ingresar un número entero positivo(realizar este control), luego presentar por pantalla
    la cantidad de dígitos que posee dicho número.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, cantidadDigitos = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    while (numero > 0) {
        numero /= 10;
        cantidadDigitos++;
    }

    printf("\nLa cantidad de digitos es: %d", cantidadDigitos);

    return 0;
}
