#include <stdio.h>
/*
    NAL: napiši program, ki od uporabnika sprejme 2 števili.
    Implementiraj funckijo "max", ki ji podamo te števili, ta pa nam vrne večjo.
    Večje število izpiši.

    IZPIS:
    Vpisi stevilo a: 5
    Vpisi stevilo b: 8
    Vecje stevilo je: 8
*/

/*
    deklaracije funkcij
*/
int max(int numberA, int numberB);
/*
    inicializacije funkcij
*/

int main() {
    int steviloA;
    int steviloB;
    printf("Vpisi stevilo a: ");
    scanf("%i", &steviloA);
    printf("Vpisi stevilo b: ");
    scanf("%i", &steviloB);

    int vecjeStevilo = max(steviloA, steviloB);

    printf("Vecje stevilo je: %i\n", vecjeStevilo);
}

int max(int numberA, int numberB) {
    if (numberA > numberB) {
        return numberA;
    } else {
        return numberB;
    }
}