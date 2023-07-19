#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long int a, b, c;
    int count;

    a = 0;
    b = 1;
    count = 0;

    while (count < 98)
    {
        c = a + b;
        printf("%lu", c);

        if (count != 97)
        {
            putchar(',');
            putchar(' ');
        }

        a = b;
        b = c;
        count++;
    }

    putchar('\n');
}

int main(void)
{
    print_fibonacci();
    return 0;
}
