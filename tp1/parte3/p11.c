/*
    11. Dados N1 menor que N2 (realizar este control), diseñar un programa que sume los
    números enteros comprendidos entre N1 y N2. Presentar por pantalla dicha suma.
    Ejemplo: N1 = 6, N2 = 12; Suma = 45
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N1, N2, suma = 0;

    do {
        printf("Ingrese el valor de N1: ");
        scanf("%d", &N1);
        printf("Ingrese el valor de N2: ");
        scanf("%d", &N2);
    } while (N1 >= N2);

    for (int i = N1 + 1; i < N2; i++) {
        suma += i;
    }

    printf("\nLa suma de los numeros comprendidos entre %d y %d es: %d", N1, N2, suma);

    return 0;
}
