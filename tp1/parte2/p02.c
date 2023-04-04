/*
    2. 
    Dado el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del
    círculo. Realizar el control de que el valor del radio sea un número positivo.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    const float PI = 3.1416;
    float radio, diametro, perimetro, area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    if (radio > 0) {
        diametro = radio * 2;
        perimetro = 2 * PI * radio;
        area = PI * radio * radio;

        printf("\nDiametro: %.2f", diametro);
        printf("\nPerimetro: %.2f", perimetro);
        printf("\nArea: %.2f", area);
    } else {
        printf("El radio debe ser un numero positivo");
    }

    return 0;
}
