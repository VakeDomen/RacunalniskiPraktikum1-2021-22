#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj izpiše vsa števila do tega števila ločena s presledki.
    
    IZPIS:
    Vnesi število: 12
    1 2 3 4 5 6 7 8 9 10 11 12
*/

int main() {
    int numA;
    
    printf("Vnesi število: ");
    scanf("%i", &numA);

    for (int i = 0 ; i < numA ; i++) {
        printf("%i ", i + 1);
    }
    printf("\n");
}