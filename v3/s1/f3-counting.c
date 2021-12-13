#include <stdio.h>
/*
    NAL: napiši program, ki štirikrat šteje do 20
    program naj kliče funkcijo "count", ki sprejme argument, 
    ki predstavlja zgornjo mejo štetja (do kam preštejemo)
    
    IZPIS:
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/
void count(int bound);

int main() {
    int counter = 1;
    while (counter <= 4) {
        count(20);
        printf("\n");
        counter++;
    }
}

void count(int bound) {
    for (int i = 1 ; i <= bound ; i++) {
        printf("%i ", i);
    }
}