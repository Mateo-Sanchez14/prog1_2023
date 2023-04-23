/*
    6.Presentar por pantalla los N primeros números primos.

            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------

//--------------------Declaracion de Funciones-------------------
int ingresarPositivo();
int siguientePrimo();
int esPrimo(int num);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N;
    printf("Ingrese la cantidad de numeros primos a imprimir: ");
    N = ingresarPositivo();
    printf("Los %d primeros numeros primos son: \n", N);
    for (int i = 0; i < N; i++) {
        printf("%d - ", siguientePrimo(i));
    }

    return 0;
}

//--------------------Funciones----------------------------------
int ingresarPositivo() {
    int n;
    do {
        printf("\n\tIngrese un numero positivo: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("El numero ingresado no es positivo. Intente nuevamente.\n");
        }
    } while (n < 0);
    return n;
}
int siguientePrimo() {
    static long int primo = 0;
    do {
        primo++;
    } while (esPrimo(primo) == 0);

    return primo;
}
int esPrimo(int num) {
    int bandera = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            bandera = 0;
            break;
        }
    }
    return bandera;
}
