/*
    25. 
    Se deben guardar los datos de N personas. Mostrar por pantalla el número de teléfono (Por ej
    "caracteristica - numero") de la persona que sea más grande. Utilizar una estructura como la
    siguiente:
    typdef struct {
        int caracteristica;
        int numero;
    } telefono;
    typdef struct {
        int dni;
        int edad;
        telefono tel;
    } persona;
*/

#include <stdio.h>

typedef struct {
    int caracteristica;
    int numero;
} telefono;

typedef struct {
    int dni;
    int edad;
    telefono tel;
} persona;

int main(int argc, char const *argv[]) {
    int N;
    persona p;
    persona aux;

    do {
        printf("Ingrese la cantidad N de personas: ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 0; i < N; i++) {
        printf("\nPersona %d:\n", i + 1);

        printf("Ingrese el DNI de la persona: ");
        scanf("%d", &p.dni);

        printf("Ingrese la edad de la persona: ");
        scanf("%d", &p.edad);

        printf("Ingrese la caracteristica del telefono de la persona: ");
        scanf("%d", &p.tel.caracteristica);

        printf("Ingrese el numero del telefono de la persona: ");
        scanf("%d", &p.tel.numero);

        if (i == 0 || p.edad > aux.edad) {
            aux.dni = p.dni;
            aux.edad = p.edad;
            aux.tel.caracteristica = p.tel.caracteristica;
            aux.tel.numero = p.tel.numero;
        }
    }

    printf("\nEl numero de telefono de la persona mas grande es: %d", aux.tel.numero);

    return 0;
}
