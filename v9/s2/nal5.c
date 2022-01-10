#include <stdio.h>
/*
    NAL: Od uporabnika preberi pozitivno celo število. 
    Program naj sešteje vsa manjša pozitivna liha 
    števila tega števila. Naredi funkcijo oddSum, ki 
    vrača vsoto, kot vhod pa vzame število, do
    katerega sešteva.

    IZPIS: 
    Vnesi stevilo: 10
    Vsota lihih predhodnikov: 25
*/
int oddSum(int upperBound);

int main() {
    int number;

    printf("Vnesi stevilo: ");
    scanf("%i", &number);

    int counter = oddSum(number);

    printf("Vsota lihih predhodnjikov: %i\n", counter);
}

int oddSum(int upperBound) {
    int sum = 0;
    //for (int i = 1 ; i <= upperBound ; i+=2) {
    //    sum += i;
    //}
    for (int i = 0 ; i <= upperBound ; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    return sum;
}