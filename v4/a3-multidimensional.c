#include <stdio.h>

/*
    NAL: izpiši tri točke. Točke shrani z uporabo večdimenzionalnih polj. 
    Za izpis napiši funkcijo "printPoints", ki sprejme polje točk.

    IZPIS:
    Tocka 1: (1, 1)
    Tocka 2: (3, 5)
    Tocka 3: (3, 2)
*/
void printPoints(int points[][2], int length);


int main() {
    
    int points[3][2] = {{1, 1}, {3, 5}, {3, 2}};
    int pointsLength = sizeof(points) / sizeof(points[0]);
    printPoints(points, pointsLength);

}

void printPoints(int points[][2], int length) {
    for (int i  = 0 ; i < length ; i++) {
        printf("Tocka %i: (%i, %i)\n", i, points[i][0], points[i][1]);
    }
}