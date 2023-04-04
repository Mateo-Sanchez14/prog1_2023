/*
    18. 
    Codificar un programa para ingresar la altura, el ancho y largo de una caja y los almacene en una
    estructura. Luego calcular y presentar por pantalla el volumen de la caja.
*/

#include <stdio.h>

struct caja {
    float altura;
    float ancho;
    float largo;
};

int main(int argc, char const *argv[]) {
    struct caja c;
    float volumen;

    printf("Ingrese la altura de la caja: ");
    scanf("%f", &c.altura);

    printf("Ingrese el ancho de la caja: ");
    scanf("%f", &c.ancho);

    printf("Ingrese el largo de la caja: ");
    scanf("%f", &c.largo);

    volumen = c.altura * c.ancho * c.largo;

    printf("\nVolumen: %.2f", volumen);

    return 0;
}
