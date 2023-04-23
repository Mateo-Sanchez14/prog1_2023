/*
    Presentar por pantalla, las N primeras letras  del alfabeto en mayúsculas.

            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------

//--------------------Declaracion de Funciones-------------------
int ingresarNoNegativo();
void imprimirAlfabeto();

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N;
    printf("Ingrese la cantidad de letras a imprimir: ");
    N = ingresarNoNegativo();
    printf("Las %d primeras letras del alfabeto son: \n", N);
    for (int i = 0; i < N; i++) {
        imprimirAlfabeto();
    }

    return 0;
}

//--------------------Funciones----------------------------------
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
void imprimirAlfabeto() {
    static char letra = 'A';
    printf("%c - ", letra);
    letra++;
    if (letra == 'Z' + 1) {
        printf("\nSe termino el alfabeto. Reiniciando...\n");
        letra = 'A';
    }
}
