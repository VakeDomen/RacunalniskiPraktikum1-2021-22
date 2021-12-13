#include <stdio.h>

int main() {
    int numbers[5];

    numbers[0] = 1;
    numbers[1] = 32;
    numbers[2] = 43;
    numbers[3] = 21;
    numbers[4] = 5;

    printf("%i", numbers[5]);

    for (int i = 0 ; i < 5 ; i++) {
        printf("%i ", numbers[i]);
    }
    
    printf("\n");
    int otherNumbers[] = {12, 5, 23, 69, 15};


    char string[] = {'b', 'l', 'a'};

    printf("%s\n", string);

    for (int i = 0 ; i < 3 ; i++) {
        printf("%c ", string[i]);
    }

    printf("\n");
    
}