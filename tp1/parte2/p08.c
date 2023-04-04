/*
    8. 
    Durante un intervalo de 3 meses, una persona debe realizar cada mes un análisis de sangre
    para determinar su cantidad de glóbulos rojos. Se necesita saber si en el intervalo de los 3
    meses, los valores obtenidos de glóbulos rojos aumentan por cada mes que pasa, o si
    descienden por cada mes que pasa, o si no se da ninguno de los dos casos anteriores.
    Realizar un programa que permita ingresar el valor de glóbulos rojos por cada mes y luego
    muestre el mensaje correspondiente.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int mes1, mes2, mes3;

    printf("Ingrese la cantidad de globulos rojos del primer mes: ");
    scanf("%d", &mes1);

    printf("Ingrese la cantidad de globulos rojos del segundo mes: ");
    scanf("%d", &mes2);

    printf("Ingrese la cantidad de globulos rojos del tercer mes: ");
    scanf("%d", &mes3);

    if (mes1 < mes2 && mes2 < mes3) {
        printf("\nLos valores de globulos rojos aumentan por cada mes que pasa");
    } else {
        if (mes1 > mes2 && mes2 > mes3) {
            printf("\nLos valores de globulos rojos disminuyen por cada mes que pasa");
        } else {
            printf("\nNo se da ninguno de los dos casos anteriores");
        }
    }

    return 0;
}
