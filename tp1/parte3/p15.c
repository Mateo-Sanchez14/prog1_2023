/*
    15. 
    Ingresar un número entero (controlar que no sea negativo), presentar por pantalla, en el
    programa principal un mensaje que indique si el mismo tiene formato binario, es decir
    que solo estéconformado por 1 o 0.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, digito, aux, esBinario = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 0);

    aux = numero;

    while (aux > 0) {
        digito = aux % 10;
        if (digito == 0 || digito == 1) {
            esBinario = 1;
        }
        aux = aux / 10;
    }

    if (esBinario == 1) {
        printf("\nEl numero %d es binario", numero);
    } else {
        printf("\nEl numero %d no es binario", numero);
    }

    return 0;
}
