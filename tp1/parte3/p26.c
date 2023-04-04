/*
    26. 
    Modificar el programa anterior para añadir un campo en la estructura teléfono que almacene un
    carácter dependiendo si es un teléfono fijo o un celular. 
    Podrá almacenar un carácter 'F' si es fijo o 'C' si es un celular, en caso de ingresar otro carácter volver a solicitar su ingreso.
    Modificar el programa para que muestre por pantalla el número de celular, indicando si es un un
    número FIJO o CELULAR, de la persona que sea más grande en edad .
*/

#include <stdio.h>

typedef struct {
    int caracteristica;
    int numero;
    char tipo;
} telefono;

typedef struct {
    int dni;
    int edad;
    telefono tel;
} persona;

// FIXME: Pide el tipo de telefono dos veces
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
        fgetc(stdin);

        do {
            printf("Ingrese el tipo de telefono de la persona (F: Fijo, C: Celular): ");
            scanf("%c", &p.tel.tipo);
            while (fgetc(stdin) != '\n');
        } while (p.tel.tipo != 'F' && p.tel.tipo != 'C');

        if (i == 0 || p.edad > aux.edad) {
            aux.dni = p.dni;
            aux.edad = p.edad;
            aux.tel.caracteristica = p.tel.caracteristica;
            aux.tel.numero = p.tel.numero;
            aux.tel.tipo = p.tel.tipo;
        }
    }

    printf("\nLa persona mas grande es la de DNI %d, con %d anios de edad y su telefono %s es (%d) %d", aux.dni, aux.edad, aux.tel.tipo == 'F' ? "FIJO" : "CELULAR", aux.tel.caracteristica, aux.tel.numero);


    return 0;
}
