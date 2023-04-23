/*
    Definir un tipo struct que contenga los siguientes atributos:
    typedef struct{ 
    char automovil; //letra que representa al automovil
    float tiempo;
    }participante;
    Emplear esta estructura para resolver el siguiente problema: En una carrera, en donde compiten N automóviles, 
    se registra una letra que identifica a cada automóvil y el tiempo que demora en llegar a la meta. 
    Utilizar funciones diferentes para:
    Verificar que N sea un número entero positivo.
    Determinar cuál es la letra que corresponde al automóvil ganador, es decir el auto que llegó utilizando el menor tiempo posible.
    Para mostrar por pantalla al automóvil ganador. Utilizar funciones de conversión de caracteres y presente la letra en mayúscula. Revisar ctype.h


            Autor: Mateo Sanchez
*/

//--------------------Includes-----------------------------------
#include <stdio.h>
#include <ctype.h>

//--------------------Estructuras--------------------------------
typedef struct {
    char automovil; //letra que representa al automovil
    float tiempo;
} participante;

//--------------------Declaracion de Funciones-------------------
int ingresarEnteroPositivo();
float ingresarTiempo();
void ingresarDatos(participante *participantes);
void determinarGanador(participante *participanteIngresado, participante *ganador, int *posicionGanador);
void mostrarGanador(participante ganador, int posicionGanadorxs);

//--------------------Funcion Principal--------------------------
int main(int argc, char const *argv[]) {
    int N, posicionGanador;
    participante unParticipante, ganador;

    printf("Ingrese la cantidad de participantes:");
    N = ingresarEnteroPositivo();

    for (int i = 0; i < N; i++) {
        ingresarDatos(&unParticipante);
        if (i == 0) {
            ganador = unParticipante;
        }
        else determinarGanador(&unParticipante, &ganador, &posicionGanador);
    }

    mostrarGanador(ganador, posicionGanador);
    
    return 0;
}

//--------------------Funciones----------------------------------
int ingresarEnteroPositivo() {
    int N;

    do {
        printf("\n\tIngrese un entero positivo: ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("El entero ingresado no es positivo, ingrese nuevamente.\n");
        }
    } while (N <= 0);

    return N;
}
void ingresarDatos(participante *participantes) {
    while (fgetc(stdin) != '\n') {
    };
    printf("Ingrese la letra que representa al automovil: ");
    scanf("%c", &participantes->automovil);
    participantes->tiempo = ingresarTiempo();
}
float ingresarTiempo() {
    float tiempo;

    do {
        printf("\n\tIngrese el tiempo que demoro en llegar a la meta: ");
        scanf("%f", &tiempo);
        if (tiempo <= 0) {
            printf("El tiempo ingresado no es positivo, ingrese nuevamente.\n");
        }
    } while (tiempo <= 0);

    return tiempo;
}
void determinarGanador(participante *participanteIngresado, participante *ganador, int *posicionGanador) {
    if (participanteIngresado->tiempo < ganador->tiempo) {
        *ganador = *participanteIngresado;
        *posicionGanador = participanteIngresado->automovil;
    }
}
void mostrarGanador(participante ganador, int posicionGanador) {
    printf("\nEl ganador es el automovil %c con un tiempo de %.2f", toupper(posicionGanador), ganador.tiempo);
    printf("\n Fue ingresado en la posicion %d", posicionGanador);
}