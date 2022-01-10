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
void swap(int* pNumA, int* pNumB);

int main() {
    int numA;
    int numB;

    printf("Vnesi prvo stevilo: ");
    scanf("%i", &numA);
    printf("Vnesi drugo stevilo: ");
    scanf("%i", &numB);
    swap(&numA, &numB);
    int sumOfOdd = oddSum(numA, numB);
    printf("Vsota lihih predhodnikov: %i\n", sumOfOdd);
}

int oddSum(int lowerBound, int upperBound) {
    int sum = 0;
    for (int i = lowerBound ; i <= upperBound ; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        }
    }
    return sum;
}

void swap(int* pNumA, int* pNumB) {
    if (*pNumA > *pNumB) { // * = dereferencing
        int tmp = *pNumA;
        *pNumA = *pNumB;
        *pNumB = tmp;
    }
}