/*
    5. 
    Presentar por pantalla las letras que estén entre la "a" y la ''m" utilizando una estructura
    "for". No mostrar la a y m solo las intermedias.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    for (char caracter = 'a' + 1; caracter < 'm'; caracter++) {
        printf("%c ", caracter);
    }

    return 0;
}
