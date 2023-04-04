/*
    20. 
    Implementar un programa que solicite al usuario el ingreso de un signo del zodíaco de una
    lista de opciones y le muestre por pantalla un mensaje que indique si es de agua, aire,
    tierra, fuego o si ha seleccionado un valor inválido. Sugerencia: usar switch. Por ejemplo, si
    se ingresa el valor 1, mostrar “El signo de Aries es de Fuego”, si se ingresa 15 mostrar “El
    valor ingresado no corresponde a una opción válida”.

    Signo       Categoría
    Aries       Fuego
    Tauro       Tierra
    Géminis     Aire
    Cáncer      Agua
    Leo         Fuego
    Virgo       Tierra
    Libra       Aire
    Escorpio    Agua
    Sagitario   Fuego
    Capricornio Tierra
    Acuario     Aire
    Piscis      Agua
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int signo;

    printf("\n1- Aries");
    printf("\n2- Tauro");
    printf("\n3- Geminis");
    printf("\n4- Cancer");
    printf("\n5- Leo");
    printf("\n6- Virgo");
    printf("\n7- Libra");
    printf("\n8- Escorpio");
    printf("\n9- Sagitario");
    printf("\n10- Capricornio");
    printf("\n11- Acuario");
    printf("\n12- Piscis");

    printf("\n--> Ingrese un signo: ");
    scanf("%i", &signo);

    switch (signo) {
        case 1:
            printf("--> El signo de Aries es de Fuego");
            break;
        case 2:
            printf("--> El signo de Tauro es de Tierra");
            break;
        case 3:
            printf("--> El signo de Geminis es de Aire");
            break;
        case 4:
            printf("--> El signo de Cancer es de Agua");
            break;
        case 5:
            printf("--> El signo de Leo es de Fuego");
            break;
        case 6:
            printf("--> El signo de Virgo es de Tierra");
            break;
        case 7:
            printf("--> El signo de Libra es de Aire");
            break;
        case 8:
            printf("--> El signo de Escorpio es de Agua");
            break;
        case 9:
            printf("--> El signo de Sagitario es de Fuego");
            break;
        case 10:
            printf("--> El signo de Capricornio es de Tierra");
            break;
        case 11:
            printf("--> El signo de Acuario es de Aire");
            break;
        case 12:
            printf("--> El signo de Piscis es de Agua");
            break;
        default:
            printf("El valor ingresado no corresponde a una opción válida");
            break;
    }

    return 0;
}
