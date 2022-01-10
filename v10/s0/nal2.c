#include <stdio.h>
/*
    NAL: Vprašaj uporabnika, koliko števil želi vpisati.
    Napiši program, ki od uporabnika sprjeme toliko celih števil.
    Števila napiši v polje (array) in izpiši njihovo vsoto.
    
    IZPIS:
    Koliko števil želiš vpisati: 4
    Vnesi stevilo 1: 23
    Vnesi stevilo 2: 35
    Vnesi stevilo 3: 1
    Vnesi stevilo 4: 33
    Sum: 92
    
*/
int arraySum(int arr[], int length);

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
    printf("Sum: %i\n", sum);
}

int arraySum(int arr[], int length) {
    int sum = 0;
    for (int i = 0 ; i < length ; i++) {
        sum += arr[i];
    }
    return sum;
}