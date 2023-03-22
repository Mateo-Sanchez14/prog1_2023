/*
    Leer cuatro números enteros, calcular y presentar por pantalla la media aritmética
(promedio) de los números ingresados.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2, num3, num4;
    int suma;
    float media;
    
    printf("Ingrese el 1er numero: ");
    scanf("%i", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%i", &num2);
    printf("Ingrese el 3er numero: ");
    scanf("%i", &num3);
    printf("Ingrese el 4to numero: ");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    media = (float)(suma) / 4;

    printf("\nMedia:\t %.2f", media);
    printf("\n");
    
    return 0;
}