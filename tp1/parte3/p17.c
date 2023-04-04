/*
    17. 
    Implementar un programa en el que se soliciten el radio de la base y la altura de un cilindro
    circular y luego se presenten por pantalla los datos. Usar una estructura como la siguiente:
    struct cilindro{
        float radio
        float altura;
    };
*/

#include <stdio.h>

struct cilindro {
    float radio;
    float altura;
};

int main(int argc, char const *argv[]) {
    struct cilindro c;

    printf("Ingrese el radio de la base del cilindro: ");
    scanf("%f", &c.radio);

    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &c.altura);

    printf("\nRadio: %.2f", c.radio);
    printf("\nAltura: %.2f", c.altura);

    return 0;
}
