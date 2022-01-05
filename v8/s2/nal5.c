#include <stdio.h>
/*
    NAL: Napiši nalogo za okvirno ocenjevanje domače naloge. 
    Program študenta vpraša po posameznih kosih domače naloge 
    in nato prikaže točke.  Uporabnik lahko odgovori z "Da", 
    "Ne" ali "Približno", tako da vpiše črke 'd', 'n' ali 'p'.
    Če uporabnik na vsa vprašanja odgovri z "Da", program 
    uporabnika tudi vpraša,  če je odpravil dodaten del naloge, 
    ki prinese bonus točke. Če uporabnik ni 
    na vse odgovri z "Da", se ta del dialoga ne pokaže. 
    
    IZPIS:
    Mogoči odvogori na vprašanja (d-Da | n-Ne | p-približno)
    Ali program opravi obvezni del naloge? d
    Ali si uporabljal funkcije? d
    Ali si uporabljal lokalne spremenljivke in ne globalne? d
    Ali si preveril validnost vnosov? d
    Ali si uporabljal komentarje? d

    Ali si implementiral dodatni del naloge? p
    Predvideno število točk je okrog 35.
*/

int main() {
    printf("Mogoči odvogori na vprašanja (d-Da | n-Ne | p-približno)\n");
    int points = 0;
    int everythingDone = 1;
    char answer;
    // 1
    printf("Ali program opravi obvezni del naloge? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 10;
    } else if (answer == 'n') {
        everythingDone = 0;
    } else if (answer == 'p') {
        points += 5;
        everythingDone = 0;
    }
    // 2
    printf("Ali si uporabljal funkcije? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5;
    } else if (answer == 'n') {
        everythingDone = 0;
    } else if (answer == 'p') {
        points += 3;
        everythingDone = 0;
    }
    // 3
    printf("Ali si uporabljal lokalne spremenljivke in ne globalne? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5;
    } else if (answer == 'n') {
        everythingDone = 0;
    } else if (answer == 'p') {
        points += 3;
        everythingDone = 0;
    }
    // 4
    printf("Ali si preveril validnost vnosov? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5;
    } else if (answer == 'n') {
        everythingDone = 0;
    } else if (answer == 'p') {
        points += 3;
        everythingDone = 0;
    }
    // 5
    printf("Ali si uporabljal komentarje? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5;
    } else if (answer == 'n') {
        everythingDone = 0;
    } else if (answer == 'p') {
        points += 3;
        everythingDone = 0;
    }

    if (everythingDone == 1) {
        // 6
        printf("Ali si implementiral dodatni del naloge? ");
        scanf(" %c", &answer);
        if (answer == 'd') {
            points += 10;
        }  else if (answer == 'p') {
            points += 5;
        }
    }
    printf("Predvideno število točk je okrog %i.", points);
}