#include <stdio.h>
/*
    NAL: vprašaj uporabnika za 2 poljubni celi števili in izpiši njuno vsoto
    
    IZPIS:
    Vnesi prvo število: 2
    Vnesi drugo število: 4
    Vsota: 6
*/

int main() {
    int numA;
    int numB;

    printf("Vnesi prvo število: ");
    scanf(" %i", &numA);

    printf("Vnesi drugo število: ");
    scanf(" %i", &numB);

    int vsota = numA + numB;
    printf("Vsota: %i", vsota);
}