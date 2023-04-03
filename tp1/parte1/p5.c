/*
    Realizar un programa que permita calcular la longitud de una circunferencia, donde la misma se calcula como:
    l = 2 pi r
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float PI = 3.14;
    float radio;
    float longitud;
    
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    longitud = 2 * PI * radio;

    printf("Longitud de la circunferencia: %.2f", longitud);
    printf("\n");

    return 0;
}