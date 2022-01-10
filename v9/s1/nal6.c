#include <stdio.h>
/*
    NAL: Od uporabnika preberi 2 števili. Program naj sešteje 
    pozitivna liha števila med njima. 

    NAMIG: z namenom delamo funkcije

    IZPIS: 
    Vnesi prvo stevilo: 10
    Vnesi drugo stevilo: 2
    Vsota lihih predhodnikov: 24
*/

void swap(int* pNumA, int* pNumB);
int oddSum(int lowerBound, int upperBound);


int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);

    printf("Vnesi drugo stevilo: ");
    scanf("%i", &numB);

    swap(&numA, &numB);
    int count = oddSum(numA, numB);

    printf("Vsota lihih predhodnikov: %i\n", count);
}

int oddSum(int lowerBound, int upperBound) {
    int counter = 0;
    for (int i = lowerBound; i <= upperBound ; i++) {
        if (i % 2 == 1) {
            counter += i;
        }
    }
    return counter;
}

void swap(int* pNumA, int* pNumB) {
    if (*pNumA > *pNumB) {
        int tmp = *pNumA;
        *pNumA = *pNumB;
        *pNumB = tmp;
    }
}