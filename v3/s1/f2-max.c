#include <stdio.h>
/*
    NAL: Napiši program, ki od uporabnika sprejme 2 števili.
    Implementiraj funkcijo "max", ki ji podamo te števili, ta
    pa nam vrne večje število. Vačje število izpiši.

    IZPIS:
    Vpisi stevilo a: 5
    Vpisi stevilo b: 8
    Vecje stevilo je: 8
*/

/*
    DEKLERACIJA FUNKCIJ
*/
int max(int num1, int num2);
/*
    INICIALIZACIJA FUNKCIJ
*/
int main() {
    int numberA;
    int numberB;
    printf("Vpiši število a: ");
    scanf("%i", &numberA);
    printf("Vpiši število b: ");
    scanf("%i", &numberB);
    int bigger = max(numberA, numberB);
    printf("Vecje stevilo je: %i\n", bigger);
}

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
