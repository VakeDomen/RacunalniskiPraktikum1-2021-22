#include <stdio.h>
#include <stdbool.h>
#include<string.h>  

int main() {

    bool playing = true;
    int counter = 0;

    int playerTurn = 0; // 0 = computer, 1 = player

    int intPlayerInput;
    char stringPlayerInput[20];

    while (playing == true) {
        if (playerTurn == 0) {
            if (counter % 3 == 0 && counter % 7 == 0) {
                printf("Fizz Buzz\n");  
            } else if (counter % 3 == 0) {
                printf("Fizz\n");    
            } else if (counter % 7 == 0) {
                printf("Buzz\n");
            } else {
                printf("%i\n", counter);
            }
        } else {
            if (counter % 3 == 0 && counter % 7 == 0) {
                scanf("%s", stringPlayerInput);  
                if (strcmp(stringPlayerInput, "Fizz Buzz")) {
                    playing = false;
                }
            } else if (counter % 3 == 0) {
                scanf("%s", stringPlayerInput);  
                if (strcmp(stringPlayerInput, "Fizz")) {
                    playing = false;
                }
            } else if (counter % 7 == 0) {
                scanf("%s", stringPlayerInput);  
                if (strcmp(stringPlayerInput, "Buzz")) {
                    playing = false;
                }
            } else {
                scanf("%i", &intPlayerInput);  
                if (intPlayerInput != counter) {
                    playing = false;
                }
            }
        }

        if (playing == false ){
            printf("OOps you made a mistake!!\n");
        }

        if (counter == 100) {
            playing = false;
        } else {
            counter = counter + 1;
            playerTurn = (playerTurn + 1) % 2;
        }

    }

}