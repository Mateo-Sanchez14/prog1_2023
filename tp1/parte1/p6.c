/*
    Ingresar dos números reales, luego presentar por pantalla el valor de la suma y el
producto de los números ingresados.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float num1, num2;
    float producto, suma;
    
    printf("Ingrese el 1er numero: ");
    scanf("%f", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%f", &num2);

    producto = num1 * num2;
    suma = num1 + num2;

    printf("\nProducto:\t %.2f", producto);
    printf("\nSuma:\t\t %.2f", suma);
    printf("\n");
    
    return 0;
}