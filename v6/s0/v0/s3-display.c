#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.    
    return 0;
}

void displayString(char str[]) {
    int done = 0;
    int index = 0;
    while (!done) {
        printf("%c", str[index]);
        if (str[index] == '\0') {
            done = 1;
        }
        index++;
    }
}

/*void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}*/