/*
    (Referencia ejercicio 9 del TP2-Parte 2) Codificar un programa en el que se solicita el
    ingreso de un carácter alfabético, luego presentar por pantalla el carácter en mayúscula si el mismo
    fue ingresado en minúscula y viceversa.  Para resolver este ejercicio deberá implementar:
    a- una función para ingresar el carácter y controlar que sea alfabético.
    b- una función para devolver el carácter convertido (esta función no debe retornar un valor)
    c-una función para mostrar por pantalla el caracter convertido(esta función no es necesario que retorno valor)


            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <ctype.h>
#include <stdio.h>

//--------------------Estructuras--------------------------------

//--------------------Declaracion de Funciones-------------------
char ingresarCaracterAlfabetico();
void convertirCaracter(char *c);
void mostrarCaracter(char c);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    char caracter;

    caracter = ingresarCaracterAlfabetico();

    convertirCaracter(&caracter);

    mostrarCaracter(caracter);

    return 0;
}

//--------------------Funciones----------------------------------
char ingresarCaracterAlfabetico() {
    char caracter;

    printf("Ingrese un caracter alfabético: ");
    scanf("%c", &caracter);

    while (!isalpha(caracter)) {
        while (fgetc(stdin) != '\n') {
        };
        printf("El caracter ingresado no es alfabético, ingrese nuevamente: ");
        scanf("%c", &caracter);
    }

    return caracter;
}
void convertirCaracter(char *c) {
    if (islower(*c)) {
        *c = toupper(*c);
    } else {
        *c = tolower(*c);
    }
}
void mostrarCaracter(char c) {
    printf("\nEl caracter convertido es: %c\n", c);
}
