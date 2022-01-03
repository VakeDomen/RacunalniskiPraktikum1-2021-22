#include <stdio.h>

void copyString(char from[], char to[]);

int main() {
    char a[20] = "bla blabla bla";
    char b[20];

    copyString(a, b);
    printf("%s\n", b);
}

void copyString(char from[], char to[]) {
    int index = 0;
    int done = 0;
    while (!done) {
        to[index] = from[index];
        if (from[index] == '\0') {
            done = 1;
        }
        index++;
    }
    
}