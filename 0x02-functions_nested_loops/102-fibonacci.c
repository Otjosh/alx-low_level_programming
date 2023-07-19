#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers are separated by comma, followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a, b, c, count;
a = 1;
b = 2;
count = 2;

printf("%lu, %lu", a, b);

while (count < 98)
{
c = a + b;
printf(", %lu", c);

a = b;
b = c;
count++;
}

printf("\n");
return (0);
}
