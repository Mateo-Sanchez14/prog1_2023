/*
    Se ponen a la venta, N  entradas para un partido de fútbol internacional,
    cuyo precio depende de la ubicación o tribuna, así:
    Tribuna norte y sur cuesta 4000 pesos,
    Tribuna este cuesta 5000 pesos y
    Tribuna oeste cuesta 6500 pesos.
    Se debe elaborar un programa que controle la venta de dichas entradas.

    Se realizan N ventas, por cada venta se solicita cantidad de entradas a comprar y en qué tribuna.
    Se pide resolver utilizando funciones:
    Controlar el ingreso de un número N positivo.
    Elaborar un menú (mediante una estructura do while) para que el usuario elija en qué tribuna quiere comprar sus entradas, y luego debe seleccionar la cantidad.
    El porcentaje de personas que se ubicaron en la tribuna norte. El porcentaje se mostrará en main y deberá ser obtenido haciendo uso de una función que no retorne un valor.
    El monto total recaudado por la venta de todas las entradas


            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------
typedef struct {
    int tribunaNorte;
    int tribunaSur;
    int tribunaEste;
    int tribunaOeste;
} tribunas;

//--------------------Declaracion de Funciones-------------------
int ingresarEnteroPositivo();
void ingresarVenta(tribunas *t);
void calcularPorcentaje(tribunas t, float *porcentaje);
void mostrarPorcentaje(float porcentaje);
void mostrarRecaudacion(tribunas t);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N;
    tribunas t = {0, 0, 0, 0};
    float porcentaje;

    printf("Ingrese la cantidad de ventas: ");
    N = ingresarEnteroPositivo();
    for (int i = 0; i < N; i++) {
        ingresarVenta(&t);
    }
    calcularPorcentaje(t, &porcentaje);
    mostrarPorcentaje(porcentaje);
    mostrarRecaudacion(t);

    return 0;
}

//--------------------Funciones----------------------------------
int ingresarEnteroPositivo() {
    int N;

    do {
        scanf("%d", &N);
        if (N <= 0) {
            printf("El entero ingresado no es positivo, ingrese nuevamente.\n");
        }
    } while (N <= 0);

    return N;
}
void ingresarVenta(tribunas *t) {
    int cantidad, tribuna;

    printf("Ingrese la cantidad de entradas a comprar: ");
    scanf("%d", &cantidad);
    do {
        printf("Ingrese la tribuna en la que desea comprar sus entradas:\n");
        printf("1. Tribuna norte\n");
        printf("2. Tribuna sur\n");
        printf("3. Tribuna este\n");
        printf("4. Tribuna oeste\n");
        printf("Opcion: ");
        scanf("%d", &tribuna);
        switch (tribuna) {
        case 1:
            t->tribunaNorte += cantidad;
            break;
        case 2:
            t->tribunaSur += cantidad;
            break;
        case 3:
            t->tribunaEste += cantidad;
            break;
        case 4:
            t->tribunaOeste += cantidad;
            break;
        default:
            printf("Opcion invalida, Intente comprar nuevamente.\n");
            break;
        }
    } while (tribuna < 1 || tribuna > 4);
}
void calcularPorcentaje(tribunas t, float *porcentaje) {
    *porcentaje = (float)t.tribunaNorte / (t.tribunaNorte + t.tribunaSur + t.tribunaEste + t.tribunaOeste) * 100;
}
void mostrarPorcentaje(float porcentaje) {
    printf("El porcentaje de personas que se ubicaron en la tribuna norte es: %.2f%%\n", porcentaje);
}
void mostrarRecaudacion(tribunas t) {
    int recaudacion = t.tribunaNorte * 4000 + t.tribunaSur * 4000 + t.tribunaEste * 5000 + t.tribunaOeste * 6500;
    printf("El monto total recaudado por la venta de todas las entradas es: %d\n", recaudacion);
}
