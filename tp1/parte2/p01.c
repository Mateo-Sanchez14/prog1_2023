/*
    1.
    Ingresar dos números reales, luego presentar por pantalla el valor de la suma y el producto
    de los números ingresados. (Resuelto)
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaración de variables
    float numeroA, numeroB, suma, producto;

    // Ingreso de los parámetros necesarios
    printf("Ingrese un numero real: ");
    scanf("%f", &numeroA);
    printf("Ingrese otro numero real: ");
    scanf("%f", &numeroB);

    // Calculo
    suma = numeroA + numeroB;
    producto = numeroA * numeroB;

    // Muestra por pantalla los resultados
    printf("El resultado de la suma es: %.2f\n", suma);
    printf("El resultado del producto es: %.2f\n", producto);
    
    return 0;
}
