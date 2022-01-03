#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void initBoard();
void displayBoard();
char getPlayerMove();
void handleMove(char move);
void moveEnemies();
void moveEnemy(int enemyNumber, int direction);
void moveEnemyUp(int enemyNumber);
void moveEnemyLeft(int enemyNumber);
void moveEnemyRight(int enemyNumber);
void moveEnemyDown(int enemyNumber);
void moveUp();
void moveLeft();
void moveRight();
void moveDown();
bool checkWin();
bool checkLoose();

const int HEIGHT = 45;
const int WIDTH = 45;
const int NUMBER_OF_ENEMIES = 40;

int playerLocation[2];
int exitLocation[2];
// CHANGE NUMBER OF ENEMIES!!!
int enemyLocations[40][2];

int main() {
    initBoard();
    displayBoard();

    while (1) {
        char move = getPlayerMove();
        handleMove(move);
        moveEnemies();
        displayBoard();
        
        if (checkWin()) {
            printf("YOU WON!!\n");
            break;
        }
        if (checkLoose()) {
            printf("YOU LOST!!\n");
            break;
        }
    }
}

void moveEnemies() {
    for (int i = 0 ; i < NUMBER_OF_ENEMIES ; i++) {
        int direction = rand() % 4;
        moveEnemy(i, direction);
    }
}

void moveEnemy(int enemyNumber, int direction) {
    if (direction == 0) {
        moveEnemyUp(enemyNumber);
    } else if (direction == 1) {
        moveEnemyLeft(enemyNumber);
    } else if (direction == 2) {
        moveEnemyRight(enemyNumber);
    } else if (direction == 3) {
        moveEnemyDown(enemyNumber);
    }
}

void moveEnemyUp(int enemyNumber) {
    if (enemyLocations[enemyNumber][1] > 0) {
        enemyLocations[enemyNumber][1]--;
    }
}

void moveEnemyLeft(int enemyNumber) {
    if (enemyLocations[enemyNumber][0] > 0) {
        enemyLocations[enemyNumber][0]--;
    }
}

void moveEnemyRight(int enemyNumber) {
    if (enemyLocations[enemyNumber][0] < WIDTH - 1) {
        enemyLocations[enemyNumber][0]++;
    }
}

void moveEnemyDown(int enemyNumber) {
    if (enemyLocations[enemyNumber][1] < HEIGHT - 1) {
        enemyLocations[enemyNumber][1]++;
    }
}


bool checkWin() {
    if (playerLocation[0] == exitLocation[0] && playerLocation[1] == exitLocation[1]) {
        return true;
    } else {
        return false;
    }
}

bool checkLoose() {
    bool standingOnEnemy = false;
    for (int i = 0 ; i < NUMBER_OF_ENEMIES ; i++) {
        if (playerLocation[0] == enemyLocations[i][0] && playerLocation[1] == enemyLocations[i][1]) {
            standingOnEnemy = true;
        }
    }
    return standingOnEnemy;
}

void moveUp() {
    if (playerLocation[1] > 0) {
        playerLocation[1]--;
    }
}
void moveLeft() {
    if (playerLocation[0] > 0) {
        playerLocation[0]--;
    }
}
void moveRight() {
    if (playerLocation[0] < WIDTH - 1) {
        playerLocation[0]++;
    }
}
void moveDown() {
    if (playerLocation[1] < HEIGHT - 1) {
        playerLocation[1]++;
    }
}

void handleMove(char move) {
    if (move == 'w') {
        moveUp();
    } else if (move == 's') {
        moveDown();
    } else if (move == 'a') {
        moveLeft();
    } else if (move == 'd') {
        moveRight();
    }
}

char getPlayerMove() {
    printf("MOVES: W-up | S-down | A-left | D-right\n");
    printf("Enter move: ");
    char move;
    scanf(" %c", &move);
    return move;
}

void initBoard() {
    playerLocation[0] = 0;
    playerLocation[1] = 0;

    exitLocation[0] = rand() % WIDTH;
    exitLocation[1] = rand() % HEIGHT;

    for (int i = 0 ; i < NUMBER_OF_ENEMIES ; i++) {
        enemyLocations[i][0] = rand() % WIDTH;
        enemyLocations[i][1] = rand() % HEIGHT;
    }
}

void displayBoard() {
    /*
        DRAW TOP OF THE FRAME
    */
    for (int col = 0 ; col < WIDTH ; col++) {
        printf("---");
    }
    printf("--\n");

    /*
        DRAW BOARD
    */
    for (int row = 0; row < HEIGHT ; row++) {
        printf("|");
        for (int col = 0 ; col < WIDTH ; col++) {
            /*
                FIND CELL TYPE
            */
            int cell = 0;
            if (playerLocation[0] == col && playerLocation[1] == row) {
                cell = 1;
            } else if (exitLocation[0] == col && exitLocation[1] == row) {
                cell = 2;
            } else {
                for (int i = 0 ; i < NUMBER_OF_ENEMIES ; i++) {
                    if (enemyLocations[i][0] == col && enemyLocations[i][1] == row) {
                        cell = 3;
                    }
                }
            }
            /*
                DISPLAY CELL
            */
            if (cell == 0) {
                printf("   ");
            } else if (cell == 1) {
                printf("\\0/");
            } else if (cell == 2) {
                printf("[ ]");
            } else if (cell == 3) {
                printf(" x ");
            }
        }
        printf("|\n");
    }
    /*
        DRAW BOTTOM OF THE FRAME
    */
    for (int col = 0 ; col < WIDTH ; col++) {
        printf("---");
    }
    printf("--\n");
}