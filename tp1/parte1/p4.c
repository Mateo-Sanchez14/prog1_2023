/*
    Realizar un programa que muestre por pantalla el contenido de dos variables llamadas
"peso" y "altura" (el valor de cada una será definido por ud). La presentación de pantalla
deberá respetar el siguiente formato: "El peso de Carlos es .... Kg, mientras que su altura
es ... m ".
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float peso, altura;

    printf("Ingrese el peso: ");
    scanf("%f", &peso);
    printf("Ingrese el altura: ");
    scanf("%f", &altura);

    printf("El peso de Carlos es %.2f Kg, mientras que su altura es %.2f m", peso, altura);
    printf("\n");

    return 0;
}