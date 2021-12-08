#include <stdio.h>

int main()
{

    int st;
    int res = 0;

    printf("Vnesi poljubno pozitivno celo stevilo\n");

    scanf("%d", &st);

    while (st > 0)
    {
        res = res * 10;
        res = res + st % 10;
        st = st / 10;
    }

    printf("Obrnjeno stevilo: %d\n", res);
}