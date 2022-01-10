#include <stdio.h>
/*
    NAL: Vprašaj uporabnika, koliko števil želi vpisati.
    Napiši program, ki od uporabnika sprjeme toliko celih števil.
    Števila napiši v polje (array) in izpiši elemente, ki so manjši 
    od povprečja.
    
    IZPIS:
    Koliko števil želiš vpisati: 5
    Vnesi stevilo 1: 32
    Vnesi stevilo 2: 54
    Vnesi stevilo 3: 12
    Vnesi stevilo 4: 54
    Vnesi stevilo 5: 23
    32 12 23 
    
*/

int arraySum(int arr[], int length);
int printBiggerElts(int arr[], int length, double bound);

int main() {
    int length;
    
    printf("Koliko števil želiš vpisati: ");
    scanf("%i", &length);
    

    int numbers[length];

    for (int i = 0 ; i < length ; i++) {
        printf("Vnesi stevilo %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    int sum = arraySum(numbers, length);
    double average = sum / length;
    printBiggerElts(numbers, length, average);
}

int arraySum(int arr[], int length) {
    int sum = 0;
    for (int i = 0 ; i < length ; i++) {
        sum += arr[i];
    }
    return sum;
}

int printBiggerElts(int arr[], int length, double bound) {
    for (int i = 0 ; i < length ; i++) {
        if (arr[i] < bound) {
            printf("%i ", arr[i]);
        }
    }
    printf("\n");
}