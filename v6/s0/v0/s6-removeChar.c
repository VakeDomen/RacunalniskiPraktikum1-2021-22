#include <stdio.h>
#include <string.h>

void removeChars(char string[], char toRemove);
void removeCharAt(char string[], int index);

int main() {
    char a[20] = "bla bla bla bla";
    removeChars(a, 'b');
    printf("%s\n", a);
}

void removeChars(char string[], char toRemove) {
    int index = 0;
    while (1) {
        if (string[index] == '\0') {
            break;
        }
        if (string[index] == toRemove) {
            removeCharAt(string, index);
        } else {
            index++;
        }
    }
}

void removeCharAt(char string[], int index) {
    //for (int i = index ; i < strlen(string); i++) {
    //    string[i] = string[i + 1];
    //}
    while (1) {
        string[index] = string[index + 1];
        if (string[index] == '\0') {
            break;
        }
        index++;
    }
}