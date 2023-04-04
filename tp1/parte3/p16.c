/*
    16. 
    Ingresar un número entero positivo X de UN SOLO DÍGITO. Luego ingresar un número
    entero positivo de dos o más dígitos. Realizar ambos controles. Presentar por pantalla la
    cantidad de veces que el dígito X aparece en el número. Ejemplo: X=7, se ingresa:
    327578 Salida por pantalla: "Aparece 2 veces".
*/

#include <stdio.h>

// FIXME: No funciona si numero > 10 digitos (numero > 2,147,483,647)
int main(int argc, char const *argv[]) {
    int numero, digito, cantidadDigitos = 0;

    do {
        printf("Ingrese un numero entero positivo de UN SOLO DIGITO: ");
        scanf("%d", &digito);
    } while (digito < 0 || digito > 9);

    do {
        printf("Ingrese un numero entero positivo de DOS O MAS DIGITOS: ");
        scanf("%d", &numero);
    } while (numero < 10 && numero > 2147483647);

    while (numero > 0) {
        if (numero % 10 == digito) {
            cantidadDigitos++;
        }
        numero = numero / 10;
    }

    printf("\nEl numero %d aparece %d veces", digito, cantidadDigitos);

    return 0;
}
