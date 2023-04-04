/*
    6. 
    Se ingresan N números enteros, presentar el promedio de los pares y el promedio de los
    impares. No considerar el número cero como número par ni como impar. Controlar que
    el valor de N sea positivo.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int cantidad, numero, sumaPares = 0, sumaImpares = 0, contadorPares = 0, contadorImpares = 0;
    float promedioPares, promedioImpares;

    do {
        printf("Ingrese la cantidad de numeros a ingresar: ");
        scanf("%d", &cantidad);
    } while (cantidad <= 0);

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0 && numero != 0) {
            sumaPares += numero;
            contadorPares++;
        } else {
            sumaImpares += numero;
            contadorImpares++;
        }
    }

    promedioPares = (float) sumaPares / contadorPares;
    promedioImpares = (float) sumaImpares / contadorImpares;

    printf("\nEl promedio de los pares es: %.2f", promedioPares);
    printf("\nEl promedio de los impares es: %.2f", promedioImpares);

    return 0;
}
