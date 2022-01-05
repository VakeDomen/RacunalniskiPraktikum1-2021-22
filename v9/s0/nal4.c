#include <stdio.h>
/*
    NAL: Od uporabnika preberi 2 števili in jih shrani v 2 spremenljivki (numA in numB).
    Zamenjaj vrednosti spremenjlivk tako, da je manjša vedno v spemenljivki numA in
    večja v numB. Spremenljivki izpiši.
    Za zamenjavo implementiraj funkcijo z imenom swap, ki prejme spremenljivki za
    zamenjavo ne vrača ničesar (void).

    IZPIS: 
    Vnesi prvo stevilo: 3
    Vnesi drugo stevilo: 8
    numA: 3
    numB: 8
*/
void swap(int* numA, int* numB);

int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numB);

    swap(&numA, &numB);

    printf("numA: %i\n", numA);
    printf("numB: %i\n", numB);

}

void swap(int* numA, int* numB) {
    int tmp = *numA;
    *numA = *numB;
    *numB = tmp;
}

