/*
    19. 
    Implementar el programa del ejercicio anterior considerando que el usuario puede
    introducir las opciones del 1 al 8, en donde 1- Lunes, 2- Martes, 3 -Miércoles, 4- Jueves, 5-
    Viernes, 6-Sábado, 7-Domingo, 8-Salir. Ud debe mostrarlas en un menú y presentar por
    pantalla el mensaje correspondiente, solo debe salir del programa si el usuario presiona 8.
    Sugerencia combinar do while y switch.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int opcion;

    do {
        printf("\n1- Lunes");
        printf("\n2- Martes");
        printf("\n3- Miercoles");
        printf("\n4- Jueves");
        printf("\n5- Viernes");
        printf("\n6- Sabado");
        printf("\n7- Domingo");
        printf("\n8- Salir");

        printf("\n--> Ingrese una opcion: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                printf("--> Lunes");
                break;
            case 2:
                printf("--> Martes");
                break;
            case 3:
                printf("--> Miercoles");
                break;
            case 4:
                printf("--> Jueves");
                break;
            case 5:
                printf("--> Viernes");
                break;
            case 6:
                printf("--> Sabado");
                break;
            case 7:
                printf("--> Domingo");
                break;
            case 8:
                printf("--> Salir");
                break;
            default:
                printf("Opcion invalida");
                break;
        }
    } while (opcion != 8);

    return 0;
}
