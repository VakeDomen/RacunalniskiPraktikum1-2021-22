#include <stdio.h>
#include <stdbool.h>
/*
    NAL: Napiši nalogo za okvirno ocenjevanje domače naloge. Program 
    študenta vpraša po posameznih kosih domače naloge in nato prikaže 
    točke. Uporabnik lahko odgovori z "Da", "Ne" ali "Približno", tako 
    da vpiše črke 'd', 'n' ali 'p'. Če uporabnik na vsa vprašanja 
    odgovri z "Da", program uporabnika tudi vpraša, 
    če je odpravil dodaten del naloge, ki prinese bonus točke. Če 
    uporabnik ni 
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
    int points = 0;
    char answer;
    bool everythingDone = true;
    

    printf("Mogoči odvogori na vprašanja (d-Da | n-Ne | p-približno)\n");
    // 1
    printf("Ali program opravi obvezni del naloge? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 10; // points = points + 10;
    } else if (answer == 'n') {
        everythingDone = false;
    } else if (answer == 'p') {
        points += 5;
    }
    // 2
    printf("Ali si uporabljal funkcije? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5; // points = points + 10;
    } else if (answer == 'n') {
        everythingDone = false;
    } else if (answer == 'p') {
        points += 3;
    }
    // 3
    printf("Ali si uporabljal lokalne spremenljivke in ne globalne? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5; // points = points + 10;
    } else if (answer == 'n') {
        everythingDone = false;
    } else if (answer == 'p') {
        points += 3;
    }
    // 4
    printf("Ali si preveril validnost vnosov? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5; // points = points + 10;
    } else if (answer == 'n') {
        everythingDone = false;
    } else if (answer == 'p') {
        points += 3;
    }
    // 5
    printf("Ali si uporabljal komentarje? ");
    scanf(" %c", &answer);
    if (answer == 'd') {
        points += 5; // points = points + 10;
    } else if (answer == 'n') {
        everythingDone = false;
    } else if (answer == 'p') {
        points += 3;
    }
    // 6
    if (everythingDone == true) {
        printf("Ali si implementiral dodatni del naloge? ");
        scanf(" %c", &answer);
        if (answer == 'd') {
            points += 10; // points = points + 10;
        } else if (answer == 'p') {
            points += 5;
        }
    }
    printf("Predvideno število točk je okrog %i.\n", points);
}