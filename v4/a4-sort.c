#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int len);
void sort(int array[], int len);


int main() {

    int ammountOfNumbers = 10;
    int numbers[ammountOfNumbers];

    for (int i = 0; i < ammountOfNumbers; i++) {
        numbers[i] = rand() % 1000;   
    }
    printArray(numbers, ammountOfNumbers);


    sort(numbers, ammountOfNumbers);
    printArray(numbers, ammountOfNumbers);

}

void sort(int array[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0 ; j < len - i - 1 ; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void printArray(int array[], int len) {
    printf("[ ");
    for (int i = 0 ; i < len ; i++) {
        printf("%i ", array[i]);
    }
    printf("]\n");
}
