/*
    3. Mostrar un mensaje al usuario de acuerdo a la opción ingresada, la misma debe ser un
    carácter (a,b,c,d). Para esto debe emplear la estructura switch con las opciones de:
        a. “Hola mundo!!!”
        b. “Programación en la FACET”
        c. “El lenguaje C”
        d. “Editar, compilar y ejecutar”
    En caso de no ingresar alguno de los caracteres mencionados mostrar el siguiente
    mensaje : "Ud debe repetir el ejercicio"
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);
    fgetc(stdin);

    switch (caracter) {
        case 'a':
            printf("Hola mundo!!!");
            break;
        case 'b':
            printf("Programacion en la FACET");
            break;
        case 'c':
            printf("El lenguaje C");
            break;
        case 'd':
            printf("Editar, compilar y ejecutar");
            break;
        default:
            printf("Ud debe repetir el ejercicio");
            break;
    }

    return 0;
}
