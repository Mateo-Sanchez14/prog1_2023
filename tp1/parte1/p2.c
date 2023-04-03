/*
    Leer dos números enteros, calcular y presentar por pantalla el producto, la suma y la
media aritmética (promedio) de los números ingresados.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2;
    int producto, suma;
    float media;
    
    printf("Ingrese el 1er numero: ");
    scanf("%i", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%i", &num2);

    producto = num1 * num2;
    suma = num1 + num2;
    media = (float)(num1 + num2) / 2;

    printf("\nProducto:\t %i", producto);
    printf("\nSuma:\t\t %i", suma);
    printf("\nMedia:\t\t %.2f", media);
    printf("\n");

    return 0;
}