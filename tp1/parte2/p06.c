/*
    6. 
    Ingresar tres números enteros, ordenarlos en forma ascendente y presentarlos por pantalla.
    En caso de ser los tres iguales, imprimir un mensaje que diga: Son iguales.
*/

#include <stdio.h>

// FIXME: Revisar el ordenamiento de los numeros
int main(int argc, char const *argv[]) {
    int numero1, numero2, numero3, aux;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &numero3);

    if (numero1 == numero2 && numero2 == numero3) {
        printf("\nLos numeros son iguales");
    } else {
        if (numero1 > numero2) {
            aux = numero1;
            numero1 = numero2;
            numero2 = aux;
        }

        if (numero2 > numero3) {
            aux = numero2;
            numero2 = numero3;
            numero3 = aux;
        }

        if (numero1 > numero2) {
            aux = numero1;
            numero1 = numero2;
            numero2 = aux;
        }

        printf("\nLos numeros ordenados en forma ascendente son: %i, %i, %i", numero1, numero2, numero3);
    }

    return 0;
}
