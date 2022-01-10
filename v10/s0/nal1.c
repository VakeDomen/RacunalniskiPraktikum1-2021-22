#include <stdio.h>
/*
    NAL: napiši program, ki od uporabnika sprjeme 5 celih števil.
    Števila napiši v polje (array) in izpiši njihovo vsoto.
    
    IZPIS:
    Vnesi stevilo 1: 23
    Vnesi stevilo 2: 35
    Vnesi stevilo 3: 1
    Vnesi stevilo 4: 33
    Vnesi stevilo 5: 78
    Sum: 170

*/
int arraySum(int arr[], int length);

int main() {
    int numbers[5];

    for (int i = 0 ; i < 5 ; i++) {
        printf("Vnesi stevilo %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    int sum = arraySum(numbers, 5);
    printf("Sum: %i\n", sum);
}

int arraySum(int arr[], int length) {
    int sum = 0;
    for (int i = 0 ; i < length ; i++) {
        sum += arr[i];
    }
    return sum;
}