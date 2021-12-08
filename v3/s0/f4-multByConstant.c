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
/*
    deklaracija funkcij
*/
int multiplyByConstant(int num);

/*
    inicializacija globalnih konstant
*/ 
const int constant = 100;
/*
    inicializacija funkcij
*/ 
int main() {
    int vnos;

    printf("Vpisi stevilo ");
    scanf("%i", &vnos);
    int pomnozenVnos = multiplyByConstant(vnos);
    printf("Rezltat: %i\n", pomnozenVnos);
}

int multiplyByConstant(int num) {
    int zmnozek = num * constant;
    return zmnozek;
}