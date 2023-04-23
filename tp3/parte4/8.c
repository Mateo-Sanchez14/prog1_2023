/*
    8. Se ingresan N números enteros. Determinar el mayor de los valores ingresados
    Ejemplo: N = 7, Se ingresan: -12, 5, -8, 30, 0, -20, 15 Mayor valor: 30.
    Controlar que el valor de N sea positivo. Usar una función que emplee variables static para encontrar el mayor.


            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>

//--------------------Estructuras--------------------------------

//--------------------Declaracion de Funciones-------------------
int ingresarPositivo();
int devolverMayor(int num);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {

    int N, num, mayor;
    printf("Ingrese la cantidad de numeros a ingresar: ");
    N = ingresarPositivo();

    for (int i = 0; i < N; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &num);
        mayor = devolverMayor(num);
    }

    printf("El mayor numero ingresado es: %d", mayor);
    return 0;
}

//--------------------Funciones----------------------------------
int ingresarPositivo() {
    int n;
    do {
        printf("\n\tIngrese un numero positivo: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("El numero ingresado no es positivo. Intente nuevamente.\n");
        }
    } while (n < 0);
    return n;
}
int devolverMayor(int num) {
    static int mayor, esPrimeraVuelta = 1;
    if (esPrimeraVuelta == 1) {
        mayor = num;
        esPrimeraVuelta = 0;
    }
    if (num > mayor) {
        mayor = num;
    }
    return mayor;
}
