#include <stdio.h>

//Vprasaj uporabnika za crko, ce crka je malo jo pretvori v veliko crko, ce crka je velika jo pretvori v malo, drugace vrni napako

int main()
{

    char crka;

    printf("Vnesi poljubno crko\n");

    scanf("%c", &crka);

    if('A'<= crka && crka <= 'Z'){
        crka = crka + 32;
    }else if('a'<= crka && crka <= 'z'){
        crka = crka - 32;
    }else{
        return 1;
    }

    printf("Izpis: %c\n", crka);
    return 0;
}