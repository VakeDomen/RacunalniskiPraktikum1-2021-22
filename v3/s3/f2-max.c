#include <stdio.h>
/*
    NAL: napiši program, ki od uporabnika sprejme 2 števili.
    Implementiraj funckijo "max", ki ji podamo te dve števili, ta pa nam vrne večjo.
    Večje število izpiši.

    IZPIS:
    Vpisi stevilo a: 5
    Vpisi stevilo b: 8
    Vecje stevilo je: 8
*/

/*
    DEKLARACIJA
*/
int max(int numberA, int numberB);

/*
    INICIALIZACIJA
*/

int main() {
    int inputA;
    int inputB;

    printf("Vpisi stevilo a: ");
    scanf("%i", &inputA);

    printf("Vpisi stevilo b: ");
    scanf("%i", &inputB);

    int bigger = max(inputA, inputB);
    printf("Vecje stevilo je: %i\n", bigger);
}

int max(int numberA, int numberB) {
    if (numberA > numberB) {
        return numberA;
    } else {
        return numberB;
    }
}