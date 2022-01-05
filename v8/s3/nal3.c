#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj izpiše vsa števila do tega števila ločena s presledki.
    
    IZPIS:
    Vnesi število: 12
    1 2 3 4 5 6 7 8 9 10 11 12
*/

int main() {
    int number;
    printf("Vnesi število: ");
    scanf("%i", &number);

    for (int i = 1 ; i <= number ; i++) {
        printf("%i ", i);
    }
    printf("\n");
}