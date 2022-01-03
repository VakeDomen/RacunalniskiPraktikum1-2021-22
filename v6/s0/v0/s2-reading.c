#include <stdio.h>

int main() {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);

    printf("Enter name again: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name); 
}