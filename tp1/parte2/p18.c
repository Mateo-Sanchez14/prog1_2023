/*
    18. 
    Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos son
    negativos y cuantos iguales a cero.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int cantidad, numero, positivos = 0, negativos = 0, ceros = 0;

    do {
        printf("Ingrese la cantidad de numeros a ingresar: ");
        scanf("%d", &cantidad);
    } while (cantidad <= 0);

    for (int i = 1; i <= cantidad; i++) {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            ceros++;
        } else if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("\nLa cantidad de numeros positivos es: %i", positivos);
    printf("\nLa cantidad de numeros negativos es: %i", negativos);
    printf("\nLa cantidad de numeros iguales a cero es: %i", ceros);

    return 0;
}
