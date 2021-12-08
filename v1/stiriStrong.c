#include <stdio.h>
int fakt(int n);

// napisi progrm, ki izpise eno stevilo stevko za stevko

// in potem oni morajo sami dopolniti tako

//   https://codeforwin.org/2015/06/c-program-to-check-strong-number.html
// The strong numbers

//1, 2, 145,

//vprasi za to stevilo na koncu, ker je tezje 40585
// ima 0 in 0! je 1

//Potem pa vprasi, kako bl lahko to pohitrili?
//zakaj racunat vedno fakulteto, ce nam rabi samo od 0 do 9, lahko samo pogledamo resitev v polje

int main()
{

    int st;
    int res = 0;
    int tmp;

    printf("Vnesi poljubno pozitivno celo stevilo\n");

    scanf("%d", &st);

    tmp = st;

    while (tmp > 0)
    {
        int val = tmp % 10;
        tmp = tmp / 10;

        res = res + fakt(val);
    }

    if (res == st && st != 0)
    {
        printf("%d is a strong number\n", st);
    }
    else
    {
        printf("%d is not a strong number, computed value %d\n", st, res);
    }
}

int fakt(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = n - 1; i > 1; i--)
        {
            n = n * i;
        }
    }
    return n;
}