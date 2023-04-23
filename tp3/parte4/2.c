/*
Ingresar N números enteros positivos, luego presentar por pantalla cuantas series de números estrictamente crecientes aparecen.
Ejemplo: 5, 1, 9, 7, 6, 0, 1, 9, 3, 2, 4, 7, 9
          |-----|       |---------|    |------------|
                1                 2                 3	  -->3 series
*/

#include <stdio.h>

//------------------Declaracion de funciones------------------
int ingresarNoNegativo();
int calcularSeriesCrecientes(int n);
int esNuevaSerie(int numActual);

//------------------------------------------------------------

int main() {
    int n, cantSeries;

    printf("Ingrese la cantidad de numeros a ingresar: ");
    n = ingresarNoNegativo();

    cantSeries = calcularSeriesCrecientes(n);

    printf("La cantidad de series estrictamente crecientes es: %d", cantSeries);

    return 0;
}

//------------------Definicion de funciones------------------
int ingresarNoNegativo() {
    int n;
    do {
        printf("\n\tIngrese un numero no negativo: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("El numero ingresado no es positivo. Intente nuevamente.\n");
        }
    } while (n < 0);
    return n;
}

int calcularSeriesCrecientes(int n) {
    int i, cantSeries = 0, numActual, bandera = 0;

    printf("Ingrese el primer numero: ");
    numActual = ingresarNoNegativo();
    esNuevaSerie(numActual); // Cargo el primer numero en mi variable static de la funcion esNuevaSerie

    for (i = 1; i < n; i++) {
        printf("Ingrese el %i numero: ", i + 1);
        numActual = ingresarNoNegativo();
        if (esNuevaSerie(numActual) == 1) {
            cantSeries++;
        }
    }
    return cantSeries;
}

int esNuevaSerie(int numActual) {
    static int numAnterior, bandera;
    int esNueva = 0;
    if (numActual <= numAnterior) {
        bandera = 0;
    } else if (bandera == 0) {
        bandera = 1;
        esNueva = 1;
    }
    numAnterior = numActual;
    return esNueva;
}