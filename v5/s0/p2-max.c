#include <stdio.h>

int max(int a, int b);

int main() {

    int num1 = 5;
    int num2 = 8;

    int bigger = max(num1, num2);
    printf("Bigger number is: %i\n", bigger);
    num2 = 3;
    printf("Bigger number is: %i\n", bigger);
}

int max(int a, int b) {
    printf("Varible a address in max: %p\n", &a);
    if (a > b) {
        return a;
    } else {
        return b;
    }
}