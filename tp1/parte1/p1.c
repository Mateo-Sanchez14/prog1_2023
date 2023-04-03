/*
    Realizar un programa en C en el que se declare una variable entera, se asigne un valor
que Ud. elija y se la presente por pantalla.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int variable;

    printf("Ingrese una variable entera: ");
    scanf("%i", &variable);

    printf("La variable ingresada es: %i", variable);
    printf("\n");
    
    return 0;
}