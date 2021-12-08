#include <stdio.h>

/*
    deklaracija funkcij
*/
void println(char string[]);


/*
    inicializacija funckij
*/ 
int main() {
    
    printf("hey\n");

    println("hey");
}

void println(char string[]) {
    printf("%s\n", string);
}