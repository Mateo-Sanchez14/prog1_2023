/*
    5. 
    Realizar un programa que solicite una fecha (ingresando día, mes y año), luego deberá
    realizar un control de la misma para considerarla válida, es decir que el valor numérico de
    día, mes y año sean positivos; día no debe superar el valor 31 y mes el valor 12. El programa
    deberá mostrar el mensaje correspondiente para cada caso.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int dia, mes, anio;

    printf("Ingrese el dia: ");
    scanf("%d", &dia);

    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if (dia > 0 && dia <= 31 && mes > 0 && mes <= 12 && anio > 0) {
        printf("\nLa fecha %i/%i/%i es valida", dia, mes, anio);
    } else {
        printf("\nLa fecha %i/%i/%i no es valida", dia, mes, anio);
    }

    return 0;
}
