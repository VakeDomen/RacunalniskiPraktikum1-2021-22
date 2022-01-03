#include <stdio.h>

int main() {
    char c[] = "c string";


    char g[] = "abcd";

    char d[50] = "abcd";

    char e[] = {'a', 'b', 'c', 'd', '\0'};

    char f[5] = {'a', 'b', 'c', 'd', '\0'};

    for (int i = 0 ; i < 5 ; i++) {
        printf("I: %c\n", f[i]);
    }
}