#include <stdio.h>

/*
    NAL: izpiši spodnji vzorec:

    IZPIS:
    0
    10
    010
    1010
    01010
    101010
    0101010
    10101010
    010101010
    1010101010
*/

int main() {
    for (int i = 0 ; i < 10 ; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            if (j <= i) {
                printf("%i", (i + j) % 2);
            }
        }
        printf("\n");
    }
}