#include <stdio.h>

/*
    NAL: izpiši spodnji vzorec:

    IZPIS:
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    *********
    ********** 
*/

int main() {
    for (int i = 0 ; i < 10 ; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            if (j <= i) {
                printf("*");
            }
        }
        printf("\n");
    }
}