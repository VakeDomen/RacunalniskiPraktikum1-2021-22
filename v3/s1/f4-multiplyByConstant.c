#include <stdio.h>
/*
    NAL: napiši program, ki od uporabnika sprejme 1 število.
    Implementiraj funckijo "multiplyByConstant", ki ji podamo to število, ta 
    pa nam število pomnoži z konstanto.
    Večje število izpiši.

    IZPIS: 
    Vpisi stevilo: 5
    Rezultat: 500
*/
int multiplyByConstant(int number);

const int CONSTANT = 100;


int main() {
    int input;
    printf("Vpisi stevilo: ");
    scanf("%i", &input);
    int multipliedInput = multiplyByConstant(input);
    printf("Rezultat: %i\n", multipliedInput);
}

int multiplyByConstant(int number) {
    int mult = number * CONSTANT;
    return mult;
}