/*
    7. 
    Se ingresan N números enteros. Determinar el mayor y el menor de los valores
    ingresados Ejemplo: N = 7, Se ingresan: -12, 5, -8, 30, 0, -20, 15 Mayor valor:30 Menor
    valor:-20. Controlar que el valor de N sea positivo.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N, numero, mayor, menor;

    do {
        printf("Ingrese la cantidad N de numeros a ingresar: ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 0; i < N; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (i == 0) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) {
                mayor = numero;
            } else if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("\nEl mayor valor es: %d", mayor);
    printf("\nEl menor valor es: %d", menor);

    return 0;
}
