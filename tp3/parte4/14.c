/*
    Ingresar N caracteres en un programa, identificar cuántos caracteres son letras minúsculas
    e indicar el porcentaje con respecto al total de caracteres.
    Por ejemplo: se ingresa N= 10 y se ingresan los siguientes caracteres: e 5 T 1 C i ? / 1 >
    Se debe mostrar que el porcentaje  de minúsculas fue del 20%.
    Para ello usar funciones para:
    1)controlar el valor de N,
    2)contar cuantos caracteres en minúsuculas se ingresaron,
    3)calcular el porcentaje con una función con esta declaración:
    void calcularPorcentaje(int cantidad, int total, float *porcentaje);
    4)presentar por pantalla el promedio, con una función con la siguiente declaración: void mostrarPorcentaje(float porcentaje);

            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <ctype.h>
#include <stdio.h>

//--------------------Estructuras--------------------------------

//--------------------Declaracion de Funciones-------------------
int ingresarEnteroPositivo();
char ingresarCaracter();
void contarMinusculas(char c, int *cantidadMinusculas);
void calcularPorcentaje(int cantidad, int total, float *porcentaje);
void mostrarPorcentaje(float porcentaje);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N, cantidadMinusculas = 0;
    char caracter;
    float porcentaje;

    N = ingresarEnteroPositivo();

    for (int i = 0; i < N; i++) {
        caracter = ingresarCaracter();
        contarMinusculas(caracter, &cantidadMinusculas);
    }
    calcularPorcentaje(cantidadMinusculas, N, &porcentaje);
    mostrarPorcentaje(porcentaje);

    return 0;
}

//--------------------Funciones----------------------------------
int ingresarEnteroPositivo() {
    int N;

    do {
        printf("Ingrese un entero positivo: ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("El entero ingresado no es positivo, ingrese nuevamente.\n");
        }
    } while (N <= 0);

    return N;
}
char ingresarCaracter() {
    char caracter;

    while (fgetc(stdin) != '\n') {
    };
    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    return caracter;
}
void contarMinusculas(char c, int *cantidadMinusculas) {

    if (islower(c)) {
        (*cantidadMinusculas)++;
    }
}
void calcularPorcentaje(int cantidad, int total, float *porcentaje) {
    *porcentaje = (float)cantidad / total * 100;
}
void mostrarPorcentaje(float porcentaje) {
    printf("El porcentaje de minusculas es: %.2f%%\n", porcentaje);
}