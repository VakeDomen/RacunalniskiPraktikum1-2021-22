#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj nato vpraša uporabnika za tolikšno število poljubnih celih števil.
    Program naj izpiše vsa števila vpisana števila ločena s presledki.
    
    IZPIS:
    Koliko števil želiš vnesti: 4
    Vnesi število 1: 32
    Vnesi število 2: 5
    Vnesi število 3: 19
    Vnesi število 4: 4
    32 5 19 4
*/

int main() {
    int len;
    
    printf("Koliko števil želiš vnesti: ");
    scanf("%i", &len);

    int numbers[len];
    for (int i = 0 ; i < len ; i++) {
        printf("Vnesi stevilo %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    for (int i = 0 ; i < len ; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}