#include <stdio.h>

void bla(int a[]);

int main() {
    int a[4] = {1, 2, 3, 4};
    int (*pa)[4] = &a;
    printf("%p\n", pa);
    bla(a);
}

void bla(int a[]) {
    printf("%p\n", a);
    printf("size: %lu\n", sizeof(a));
}

