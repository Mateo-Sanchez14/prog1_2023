/*
    21. 
    Codificar un programa para: ingresar dos números N y D enteros positivos. Debe realizar el
    control del ingreso de datos, luego calcular el valor del cociente y resto entre N y D utilizando el
    método de restas sucesivas. Para almacenar y mostrar por pantalla el resultado utilizar la
    siguiente estructura:
    struct dividir {
        float cociente;
        int resto;
    };
*/

#include <stdio.h>

struct dividir {
    float cociente;
    int resto;
};

int main(int argc, char const *argv[]) {
    struct dividir division;
    int N, D;

    do {
        printf("Ingrese un entero positivo N: ");
        scanf("%d", &N);
    } while (N <= 0);

    do {
        printf("Ingrese un entero positivo D: ");
        scanf("%d", &D);
    } while (D < 1);

    while (N >= D) {
        N -= D;
        division.cociente++;
    }

    division.resto = N;

    printf("\nCociente: %.2f", division.cociente);
    printf("\nResto: %d", division.resto);

    return 0;
}
