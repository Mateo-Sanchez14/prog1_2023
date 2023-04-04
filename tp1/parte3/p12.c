/*
    12. 
    Diseñar un programa que permita el ingreso de dos números enteros positivos y
    calcular el producto de dichos números utilizando el método de sumas sucesivas.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero1, numero2, producto = 0;

    do {
        printf("Ingrese el primer numero: ");
        scanf("%d", &numero1);
    } while (numero1 <= 0);

    do {
        printf("Ingrese el segundo numero: ");
        scanf("%d", &numero2);
    } while (numero2 <= 0);

    for (int i = 0; i < numero2; i++) {
        (i == numero2 - 1) ? printf("%d ", producto) : printf("%d + ", producto);
        producto += numero1;
    }

    printf("\nEl producto de %d y %d es: %d", numero1, numero2, producto);

    return 0;
}
