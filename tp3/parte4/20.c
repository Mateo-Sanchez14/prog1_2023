/*
    Un proveedor de tecnología, registra sus ventas diarias en un sistema diseñado para solicitar DNI del cliente,
    monto de la venta y condición de la misma ('t' para tarjeta de crédito o débito, 'e' para pago en efectivo y 'c' para cuenta corriente).
Almacenar la venta en un dato tipo estructura con el siguiente formato:
typdef struct{
int dni;
float monto;
char condicion;
}venta;
Se deben ingresar N ventas.
 Al finalizar cada día el encargado necesita saber:
el total por cada condición de venta. El sistema debe mostrar en la función principal el
total de ventas de cada condición de ventas. Para esto realizar la siguiente función: float totalVenta( venta *v, float *totale, float *totalc)
el importe de venta más alto y a que cliente perteneció. El sistema debe mostrar en la función principal el importe más alto y el dni del cliente que realizó la compra.  Para esto realizar la siguiente función: float ventaMayor( venta *v, int dni )
el porcentaje de ingresos que representa cada condición, esto el sistema se lo muestra en la función principal con una función que no retorna valor  y que tiene la siguiente declaración: void porcentajes(float total, float individual, float *porcentaje);



            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------
typedef struct {
    int dni;
    float monto;
    char medio_pago;
} venta;

//--------------------Declaracion de Funciones-------------------
int ingresarEnteroPositivo();
char ingresarCaracter();
float ingresarFlotantePositivo();
void ingresarVenta(venta *ventaIngresada);
void mayorVenta(venta ventaIngresada, venta *ventaMayor);
float totalVenta(venta v, float *totalT, float *totalE, float *totalC);
void porcentajes(float total, float individual, float *porcentaje);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N;
    float total_efectivo = 0, total_tarjeta = 0, total_cuenta_corriente = 0, total = 0, porcentaje = 0;
    venta ventaIngresada, ventaMayor;

    printf("Ingrese la cantidad de ventas: ");
    N = ingresarEnteroPositivo();

    for (int i = 0; i < N; i++) {
        ingresarVenta(&ventaIngresada);
        total += ventaIngresada.monto;
        totalVenta(ventaIngresada, &total_tarjeta, &total_efectivo, &total_cuenta_corriente);
        mayorVenta(ventaIngresada, &ventaMayor);
    }

    porcentajes(total, total_tarjeta, &porcentaje);
    printf("El total de ventas por tarjeta es: %.2f y el porcentaje es: %.2f\n", total_tarjeta, porcentaje);
    porcentajes(total, total_efectivo, &porcentaje);
    printf("El total de ventas por efectivo es: %.2f y el porcentaje es: %.2f\n", total_efectivo, porcentaje);
    porcentajes(total, total_cuenta_corriente, &porcentaje);
    printf("El total de ventas por cuenta corriente es: %.2f y el porcentaje es: %.2f\n", total_cuenta_corriente, porcentaje);
    printf("La venta mayor fue de: %.2f y el DNI del cliente es: %d\n", ventaMayor.monto, ventaMayor.dni);

    return 0;
}

//--------------------Funciones----------------------------------
int ingresarEnteroPositivo() {
    int numero;
    do {
        scanf("%d", &numero);
    } while (numero < 0);
    return numero;
}
float ingresarFlotantePositivo() {
    float numero;
    do {
        scanf("%f", &numero);
    } while (numero < 0);
    return numero;
}
char ingresarCaracter() {
    char caracter;
    do {
        scanf("%c", &caracter);
        if (caracter != 't' && caracter != 'e' && caracter != 'c') {
            printf("Ingrese un caracter valido: ");
        }
    } while (caracter != 't' && caracter != 'e' && caracter != 'c');
    return caracter;
}
void ingresarVenta(venta *ventaIngresada) {
    printf("Ingrese el DNI del cliente: ");
    ventaIngresada->dni = ingresarEnteroPositivo();
    printf("Ingrese el monto de la venta: ");
    ventaIngresada->monto = ingresarFlotantePositivo();
    printf("Ingrese el medio de pago (t para tarjeta, e para efectivo, c para cuenta corriente): ");
    ventaIngresada->medio_pago = ingresarCaracter();
}
void mayorVenta(venta ventaIngresada, venta *ventaMayor) {
    if (ventaIngresada.monto > ventaMayor->monto) {
        *ventaMayor = ventaIngresada;
    }
}
float totalVenta(venta v, float *totalT, float *totalE, float *totalC) {
    switch (v.medio_pago) {
    case 't':
        *totalT += v.monto;
        break;
    case 'e':
        *totalE += v.monto;
        break;
    case 'c':
        *totalC += v.monto;
        break;
    }
}
void porcentajes(float total, float individual, float *porcentaje) {
    *porcentaje = (individual * 100) / total;
}
