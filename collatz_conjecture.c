#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Number: ");
    }
    while (x < 0);

    do {
    if (x % 2 == 0)
    {
        x = (x / 2);
        printf("%i -> ", x);
    }
    else
    {
        x = (x * 3 + 1);
        printf("%i -> ", x);
    }
    }
    while (x > 1);

        printf("The number has descended to 1\n");
}
