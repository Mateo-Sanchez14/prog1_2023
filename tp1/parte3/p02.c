/*
    2.
    Ingresar 3 carácteres por teclado y luego presentar por pantalla un mensaje con la
    siguiente leyenda "Los carácteres ingresados son ...(mostrar los carácteres ingresados)"
    Nota: Para resolver es importante Investigar! ¿Para qué usamos el fgetc(stdin)? ¿Qué otra
    instrucción se podrá utilizar para el mismo cometido?
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char caracter1, caracter2, caracter3;

    printf("Ingrese el primer caracter:\t");
    scanf("%c", &caracter1);
    fgetc(stdin);

    printf("Ingrese el segundo caracter:\t");
    scanf("%c", &caracter2);
    fgetc(stdin);
    
    printf("Ingrese el tercer caracter:\t");
    scanf("%c", &caracter3);
    fgetc(stdin);

    printf("\nLos caracteres ingresados son %c %c %c", caracter1, caracter2, caracter3);

    return 0;
}
