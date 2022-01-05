#include <stdio.h>
/*
    NAL: Od uporabnika preberi 2 števili. Program naj sešteje 
    pozitivna liha števila med njima. 

    IZPIS: 
    Vnesi prvo stevilo: 10
    Vnesi drugo stevilo: 2
    Vsota lihih predhodnikov: 24
*/
int oddSum(int lowerBound, int upperBound);
void swap(int* numA, int* numB);

int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numB);

    swap(&numA, &numB);
    int count = oddSum(numA, numB);    

    printf("Vsota lihih predhodnikov: %i\n", count);
}

int oddSum(int lowerBound, int upperBound) {
    int count = 0;
    for (int i = lowerBound ; i < upperBound ; i++) {
        if (i % 2 == 1) {
            count = count + i;
        }
    }
    return count;
}


void swap(int* numA, int* numB) {
    if (*numA > *numB) {
        int tmp = *numA;
        *numA = *numB;
        *numB = tmp;
    }
}

