#include <stdio.h>

void concat(char arr1[], char arr2[], char final[]);

int main() {
    char string1[20] = "Hello ";
    char string2[10] = "world!";
    char out[20];

    concat(string1, string2, out);
    printf("%s\n", out);
}

void concat(char arr1[], char arr2[], char final[]) {
    int index = 0;
    int indexFinal = 0;
    while (1) {
        final[indexFinal] = arr1[index];
        if (arr1[index] == '\0') {
            break;
        }
        index++;
        indexFinal++;
    }

    index = 0;
    while (1) {
        final[indexFinal] = arr2[index];
        if (arr1[index] == '\0') {
            break;
        }
        index++;
        indexFinal++;
    }
}