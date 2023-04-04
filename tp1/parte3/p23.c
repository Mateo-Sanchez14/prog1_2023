/*
    23. 
    Ingresar N números (realizar el control de que N sea positivo), contabilizar cuántos números
    pares e impares se encontraron, luego mostrar los resultados por pantalla. Utilizar una
    estructura como la siguiente:
    typedef struct {
        int pares;
        int impares;
    } categorias;
*/

#include <stdio.h>

typedef struct {
    int pares;
    int impares;
} categorias;

int main(int argc, char const *argv[]) {
    categorias numeros = {0, 0};
    int N, numero;

    do {
        printf("Ingrese la cantidad N de numeros a ingresar: ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 0; i < N; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            numeros.pares++;
        } else {
            numeros.impares++;
        }
    }

    printf("\nPares: %d", numeros.pares);
    printf("\nImpares: %d", numeros.impares);

    return 0;
}
