/*
     13. Codificar un programa en el que se solicita el ingreso del peso y la talla de N personas, utilizando
    una estructura para contener peso y talla. Debe mostrar por pantalla cuál es la persona que
    tiene mayor peso y talla. Para resolver debe emplear una función que use parámetros por valor
    tipo estructura y que retorne una estructura.

            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------
// Struct
typedef struct
{
    float peso;
    float talla;
} persona;

//--------------------Declaracion de Funciones-------------------
int controlN(int N);
persona ingresarPersona(persona persona);
float controlFloat();
persona controlMayorPeso(persona personaActual, persona mayorPeso);
persona controlMayorTalla(persona personaActual, persona mayorTalla);
void mostrarPersona(persona persona);

//--------------------Funcion Principal--------------------------
int main(int argc, char *argv[])
{
    persona persona1, personaMayorPeso, personaMayorTalla;
    int N, i;

    N = controlN(N);

    for (int i = 0; i < N; i++)
    {
        persona1 = ingresarPersona(persona1);
        if (i == 0) {
            personaMayorPeso = persona1;
            personaMayorTalla = persona1;
        }
        personaMayorPeso = controlMayorPeso(persona1, personaMayorPeso);
        personaMayorTalla = controlMayorTalla(persona1, personaMayorTalla);
    }

    printf("\nLa persona con mayor peso es: \n");
    mostrarPersona(personaMayorPeso);
    printf("\nLa persona con mayor talla es: \n");
    mostrarPersona(personaMayorTalla);

    return 0;
}

//--------------------Funciones----------------------------------
// Funcion para determinar que N sea un valor entero positivo
int controlN(int N)
{
    do
    {
        printf("Ingrese un valor entero positivo para N: ");
        scanf("%d", &N);

        if (N <= 0)
        {
            printf("El valor ingresado no es valido. Intente nuevamente.\n");
        }

    } while (N <= 0);

    return N;
}

// Funcion para ingresar los datos de una persona
persona ingresarPersona(persona persona)
{

    printf("Ingrese el peso de la persona: ");
    persona.peso = controlFloat();

    printf("Ingrese la talla de la persona: ");
    persona.talla = controlFloat();

    return persona;
}

// Funcion para determinar la persona con mayor peso
persona controlMayorPeso(persona personaActual, persona mayorPeso)
{
    if (personaActual.peso > mayorPeso.peso)
    {
        mayorPeso = personaActual;
    }
    return mayorPeso;
}
persona controlMayorTalla(persona personaActual, persona mayorTalla)
{
    if (personaActual.talla > mayorTalla.talla)
    {
        mayorTalla = personaActual;
    }
    return mayorTalla;
}

float controlFloat()
{
    float num;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%f", &num);

        if (num <= 0)
        {
            printf("El valor ingresado no es valido. Intente nuevamente.\n");
        }

    } while (num <= 0);

    return num;
}
void mostrarPersona(persona persona)
{  
    printf("\n\tPeso: %.2f\n", persona.peso);
    printf("\n\tTalla: %.2f\n", persona.talla);
}