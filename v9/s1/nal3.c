#include <stdio.h>
/*
    NAL: Od uporabnika preberi število.
    Inicializiraj pointer na to spremenljivko.
    Izpiši sledeča imena spremenljivk in njihove vrednosti:
        -number
        -pNumA
        -*pNumA


    \t = tab

    IZPIS: 
    Vnesi stevilo: 7
    
    IME              VREDNOST
    number           7
    pNumber          0x7fff7bca7b1c
    *pNumber         7
*/
int main() {
    int number;
    printf("Vnesi stevilo: ");
    scanf("%i", &number);

    int* pNumber = &number;
    printf("\n");
    printf("IME \t\t VREDNOST\n");
    printf("number \t\t %i\n", number);
    printf("pNumber\t\t %p\n", pNumber);
    printf("*pNumber\t %i\n", *pNumber);
}