/*
    13. 
    Diseñar un programa que permita ingresar un número entero positivo de 2 o más
    dígitos (realizar el control). Determinar la suma de los dígitos del número que sean
    impares. Presentar por pantalla el resultado en el programa principal.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, sumaDigitosImpares = 0;

    do {
        printf("Ingrese un numero entero positivo de 2 o mas digitos: ");
        scanf("%d", &numero);
    } while (numero < 10);

    while (numero > 0) {
        if (numero % 2 != 0) {
            sumaDigitosImpares += numero % 10;
        }
        numero = numero / 10;
    }

    printf("\nLa suma de los digitos impares es: %d", sumaDigitosImpares);

    return 0;
}
