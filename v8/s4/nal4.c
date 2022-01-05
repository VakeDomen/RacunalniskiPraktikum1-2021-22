#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj nato vpraša uporabnika za tolikšno število poljubnih celih števil.
    Program naj izpiše vsa števila vpisana števila ločena s presledki.
    
    [_, _, _, _]
     0  1  2  3 

    IZPIS:
    Koliko števil želiš vnesti: 4
    Vnesi število 1: 32
    Vnesi število 2: 5
    Vnesi število 3: 19
    Vnesi število 4: 4
    32 5 19 4
*/

int main() {
    // vnos uporabnika
    int length;
    printf("Koliko števil želiš vnesti: ");
    scanf("%i", &length);

    // vnos števil v polje
    int numbers[length];
    for (int i = 0 ; i < length ; i++) {
        printf("Vnesi število %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    // izpis polja
    for (int i = 0 ; i < length ; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}