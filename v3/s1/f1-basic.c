#include <stdio.h>
/*
    DEKLARACIJA FUNKCIJ
*/
void greeting();

/*
    INICIALIZACIJA FUNKCIJ
*/
int main() {
    greeting("Hello world!");
}

void greeting(char greet[]) {
    printf("%s\n", greet);
}