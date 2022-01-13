#include <stdio.h>
#include <string.h>
/*
    NAL: Vprašaj uporabnika, naj vpiše besedo.
    Izpiši zadnjo črko besede. 
    
    IZPIS:
    Vpisi besedo: blablabla
    Zadnja crka: a
    
*/

int main() {
    char string[100];
    printf("Vnesi besedo: ");
    scanf("%s", string);

    //int i = 0;
    //char last;
    //while (string[i] != '\0') {
    //    last = string[i];
    //    i++;
    //}
    //printf("Zadnja crka: %c\n", last);
    printf("%c\n", string[strlen(string) - 1]);
}