#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool playing = true;
    int counter = 0;

    while (playing == true)
    {

        if (counter % 3 == 0 && counter % 7 == 0)
        {
            printf("Fizz Buzz\n");
        }
        else if (counter % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (counter % 7 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%i\n", counter);
        }

        if (counter == 100)
        {
            playing = false;
        }
        else
        {
            counter = counter + 1;
        }
    }
}