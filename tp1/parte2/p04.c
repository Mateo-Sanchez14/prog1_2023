/*
    4. 
    Ingresar dos números enteros, determinar si fueron ingresados en orden creciente,
    decreciente o si son iguales, presentar por pantalla el mensaje correspondiente.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero1, numero2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("\nLos numeros son iguales");
    } else if (numero1 > numero2) {
        printf("\nLos numeros fueron ingresados en orden decreciente");
    } else {
        printf("\nLos numeros fueron ingresados en orden creciente");
    }

    return 0;
}
