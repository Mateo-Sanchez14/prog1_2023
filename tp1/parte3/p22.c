/*
    22. 
    Ingresar números positivos, la carga debe terminar cuando se ingrese un cero; luego presentar
    por pantalla el menor valor de los números ingresados, indicando el orden en que ingresaron.
    Utilizar una estructura como la siguiente para almacenar los resultados:
    typdef struct {
        int valor;
        int posicion;
    } num;
*/

#include <stdio.h>

typedef struct {
    int valor;
    int posicion;
} num;

// FIXME: Revisar si debe tomar en cuenta el 0
int main(int argc, char const *argv[]) {
    num n;
    int numero, posicion = 1;

    do {
        do {
            printf("Ingrese un numero positivo: ");
            scanf("%d", &numero);
        } while (numero < 0);

        if (n.posicion == 0 || numero < n.valor && numero != 0 ) {
            n.valor = numero;
            n.posicion = posicion;
        }
        posicion++;
    } while (numero != 0);

    printf("\nMenor valor: %d", n.valor);
    printf("\nPosicion: %d", n.posicion);

    return 0;
}
