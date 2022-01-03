#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno celo število in izpiši ali je to število sodo ali liho.
    
    IZPIS:
    Vnesi število: 12
    Število je sodo!
*/

int main() {
    int numA;
    
    printf("Vnesi število: ");
    scanf("%i", &numA);

    if (numA % 2 == 0) {
        printf("Število je sodo!\n");
    } else {
        printf("Število je liho!\n");
        
    }
}