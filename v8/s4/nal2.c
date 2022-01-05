#include <stdio.h>
/*
    NAL: Vprašaj uporabnika za poljubno celo število in izpiši ali je to število sodo ali liho.
    
    IZPIS:
    Vnesi število: 12
    Število je sodo!
*/
void spremeniNaDve(int* spremenljivka);

int main() {
    int number;
    printf("Vnesi število: ");
    scanf("%i", &number);

    if (number % 2 == 0) {
        printf("Število je sodo!\n");
    } else {
        printf("Število je liho!\n");
    }

    // ni vezano na nalogo 
    int nekajKarNiDva = 5;
    printf("%i\n", nekajKarNiDva);
    spremeniNaDve(&nekajKarNiDva);
    printf("%i\n", nekajKarNiDva);

}

void spremeniNaDve(int* spremenljivka) {
    *spremenljivka = 2;
}