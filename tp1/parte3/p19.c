/*
    19. Implementar un programa en el que se ingresan los datos de N personas. Calcular y presentar
    por pantalla el promedio de edades de las personas ingresadas. Utilizar la estructura en la que se
    represente la inicial del apellido y del nombre (1 caracter para cada uno) y la edad de una
    persona. Controlar que la edad sea un valor positivo.
    struct persona {
        char nombre;
        char apellido;
        int edad;
    };
*/

#include <stdio.h>

struct persona {
    char nombre;
    char apellido;
    int edad;
};

int main(int argc, char const *argv[]) {
    struct persona p;
    int cantidadPersonas, sumaEdades = 0;
    float promedioEdades;

    do {
        printf("Ingrese la cantidad N de personas: ");
        scanf("%d", &cantidadPersonas);
    } while (cantidadPersonas < 1);

    for (int i = 0; i < cantidadPersonas; i++) {
        printf("\nIngrese el nombre de la persona %d: ", i + 1);
        scanf("%c", &p.nombre);
        while (fgetc(stdin) != '\n');

        printf("Ingrese el apellido de la persona %d: ", i + 1);
        scanf("%c", &p.apellido);
        while (fgetc(stdin) != '\n');

        do {
            printf("Ingrese la edad de la persona %d: ", i + 1);
            scanf("%d", &p.edad);
        } while (p.edad < 0 && p.edad > 150);

        sumaEdades += p.edad;
    }

    promedioEdades = (float) sumaEdades / cantidadPersonas;

    printf("\nPromedio de edades: %.2f", promedioEdades);

    return 0;
}
