#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 *              whose values do not exceed 4,000,000 and prints the sum.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a = 1;
long int b = 2;
long int c;
long int sum = 2;

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

printf("Sum of even-valued terms in Fibonacci sequence: %ld\n", sum);

return (0);
}
