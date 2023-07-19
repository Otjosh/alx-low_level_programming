#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Calculates and prints the sum of even-valued terms
 *              in the Fibonacci sequence, up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long int a, b, c, sum;

a = 1;
b = 2;
sum = 2;

while (1)
{
c = a + b;
if (c > 4000000)
break;

if (c % 2 == 0)
sum += c;

a = b;
b = c;
}

printf("%lu\n", sum);
return (0);
}
