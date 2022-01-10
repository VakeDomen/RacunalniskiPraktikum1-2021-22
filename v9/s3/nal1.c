#include <stdio.h>
/*
    NAL: Od uporabnika preberi 2 števili in 
    jih shrani v 2 spremenljivki (numA in numB).
    Zamenjaj vrednosti spremenjlivk in jih 
    izpiši

    IZPIS: 
    Vnesi prvo stevilo: 3
    Vnesi drugo stevilo: 8
    numA: 8
    numB: 3
*/
int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);

    printf("Vnesi drugo stevilo: ");
    scanf("%i", &numB);

    int tmp = numA;
    numA = numB;
    numB = tmp;

    printf("numA: %i\n", numA);
    printf("numB: %i\n", numB);
}