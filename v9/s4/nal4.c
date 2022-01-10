#include <stdio.h>
/*
    NAL: Od uporabnika preberi 2 števili in jih shrani 
    v 2 spremenljivki (numA in numB).
    Zamenjaj vrednosti spremenjlivk tako, da je manjša
    vedno v spemenljivki numA in
    večja v numB. Spremenljivki izpiši.
    Za zamenjavo implementiraj funkcijo z imenom swap, 
    ki prejme spremenljivki za
    zamenjavo ne vrača ničesar (void).

    IZPIS: 
    Vnesi prvo stevilo: 3
    Vnesi drugo stevilo: 8
    numA: 3
    numB: 8


*/
void swap(int* pNumA, int* pNumB);

int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);

    printf("Vnesi drugo stevilo: ");
    scanf("%i", &numB);

    swap(&numA, &numB);

    printf("numA: %i\n", numA);
    printf("numB: %i\n", numB);
}

void swap(int* pNumA, int* pNumB) {
    if (*pNumA > *pNumB) { // * = dereferencing
        int tmp = *pNumA;
        *pNumA = *pNumB;
        *pNumB = tmp;
    }
}