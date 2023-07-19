#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit needs to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;

a = n % 10;

if (a < 0)
a = -a;

_putchar('0' + a);

return (a);
}
