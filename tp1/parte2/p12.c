/*
    12. 
    Presentar por pantalla los N primeros números impares positivos.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, contador = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    printf("\nLos %i primeros numeros impares positivos son: ", numero);
    printf("\t--> ");
    
    while (contador <= numero) {
        printf("%i ", contador * 2 - 1);
        contador++;
    }

    return 0;
}
