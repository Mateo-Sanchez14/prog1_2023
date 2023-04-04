/*
    24. 
    En una fábrica se registra la información del mantenimiento de las N máquinas que posee la
    fábrica en una estructura como la siguiente:
    struct maquina{
        int numeroMaquina;
        char sector;
        int ultimoAnioMantenimiento;
    };
    Se pide calcular y mostrar el porcentaje de máquinas cuyo último año de mantenimiento fue en el
    2020.
*/

#include <stdio.h>

struct maquina {
    int numeroMaquina;
    char sector;
    int ultimoAnioMantenimiento;
};

int main(int argc, char const *argv[]) {
    struct maquina m;
    int N, cantidadMantenimiento = 0;
    float porcentajeMantenimiento;

    do {
        printf("Ingrese la cantidad N de maquinas a ingresar: ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 0; i < N; i++) {
        printf("\nMaquina %d:\n", i + 1);

        do {
            printf("Ingrese el numero de maquina: ");
            scanf("%d", &m.numeroMaquina);
        } while (m.numeroMaquina < 1);

        do {
            printf("Ingrese el sector de la maquina: ");
            scanf("%c", &m.sector);
            while (fgetc(stdin) != '\n');
        } while ((m.sector < 'a' || m.sector > 'z'));

        do {
            printf("Ingrese el ultimo anio de mantenimiento: ");
            scanf("%d", &m.ultimoAnioMantenimiento);
        } while (m.ultimoAnioMantenimiento < 1900 || m.ultimoAnioMantenimiento > 2023);

        if (m.ultimoAnioMantenimiento == 2020) {
            cantidadMantenimiento++;
        }
    }

    porcentajeMantenimiento = (float) cantidadMantenimiento / N * 100;

    printf("\nPorcentaje de maquinas con mantenimiento en el 2020: %.2f%%", porcentajeMantenimiento);

    return 0;
}
