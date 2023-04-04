/*
    10. 
    Ingresar un número entero positivo(Controlar que el valor sea positivo) e indicar si es primo o no.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, contador = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        printf("\nEl numero %d es primo", numero);
    } else {
        printf("\nEl numero %d no es primo", numero);
    }

    return 0;
}
