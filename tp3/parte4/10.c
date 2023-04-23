/*
    (Referencia ejercicio 2 del TP2-Parte 2).Definir un tipo struct que tenga dos campos, uno para contener la parte real y otro la parte imaginaria de un número complejo:
    typedef struct{
    float real;
    float imaginario;
    }complejo;
    Emplear esta estructura para solicitar al usuario el ingreso de dos números complejos, realizar la suma de los mismos.
    Al finalizar los cálculos deberá presentar por pantalla los números complejos ingresados, la suma de dichos números.
    Para resolver deberá implementar funciones que empleen parámetros por referencia (y por valor si fuese necesario):
    Una función para solicitar al usuario el ingreso de un número complejo
    Una función para presentar por pantalla un número complejo dado
    Una función para calcular la suma de dos números complejos dados (esta función no debe retornar un valor)


            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------
typedef struct {
    float real;
    float imaginario;
} complejo;

//--------------------Declaracion de Funciones-------------------
void ingresarComplejo(complejo *c);
void mostrarComplejo(complejo c);
void sumarComplejos(complejo c1, complejo c2, complejo *c3);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {

    complejo c1, c2, resultado;

    ingresarComplejo(&c1);
    printf("El complejo ingresado es: ");
    mostrarComplejo(c1);

    ingresarComplejo(&c2);
    printf("\nEl complejo ingresado es: ");
    mostrarComplejo(c2);

    sumarComplejos(c1, c2, &resultado);

    printf("\nLa suma de los complejos es: ");
    mostrarComplejo(resultado);

    return 0;
}

//--------------------Funciones----------------------------------
void ingresarComplejo(complejo *c) {
    printf("Ingrese la parte real: ");
    scanf("%f", &c->real);
    printf("Ingrese la parte imaginaria: ");
    scanf("%f", &c->imaginario);
}
void mostrarComplejo(complejo c) {
    if (c.imaginario >= 0)
        printf("\n\t%.2f + %.2fi\n", c.real, c.imaginario);
    else
        printf("\n\t%.2f - %.2fi\n", c.real, c.imaginario * -1);
}
void sumarComplejos(complejo c1, complejo c2, complejo *c3) {
    c3->real = c1.real + c2.real;
    c3->imaginario = c1.imaginario + c2.imaginario;
}