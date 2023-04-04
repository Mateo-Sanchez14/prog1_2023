/*
    14. 
    Dado un número natural de 4 dígitos(realizar este control), presentar por pantalla todos sus divisores.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;

    do {
        printf("Ingrese un numero natural de 4 digitos: ");
        scanf("%d", &numero);
    } while (numero < 1000 || numero > 9999);

    printf("\nLos divisores de %d son: ", numero);
    
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
