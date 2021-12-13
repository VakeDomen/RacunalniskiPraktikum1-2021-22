#include <stdio.h>

void checkArrayLength(int array[]);
void printArray(int array[], int length);

int main() {
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int sizeOfArray = sizeof(numbers);
    printf("Size of whole array: %i\n", sizeOfArray);

    int sizeOfElement = sizeof(numbers[0]);
    printf("Size of element: %i\n", sizeOfElement);

    int lengthOfArray = sizeOfArray / sizeOfElement;
    printf("Length of array: %i\n", lengthOfArray);

    checkArrayLength(numbers);
    printArray(numbers, lengthOfArray);

}

void checkArrayLength(int array[]) {
    /*
        se ne vemo zakaj je cudno, ampak velikosti niso enake kot v main funkciji!!
    */
    printf("Length caluclated by strlen: %li\n", sizeof(*array));
}

void printArray(int array[], int len) {
    printf("[ ");
    for (int i = 0 ; i < len ; i++) {
        printf("%i ", array[i]);
    }
    printf("]\n");
}

