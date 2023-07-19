#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number defining the size of the times table
 */
void print_times_table(int n)
{
int row, column, result;

if (n <= 15 && n >= 0)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;

if (column != 0)
{
_putchar(',');
_putchar(' ');
}

if (result <= 9 && column != 0)
_putchar(' ');

if (result <= 99 && column != 0)
_putchar(' ');

if (result >= 100)
{
_putchar('0' + (result / 100));
_putchar('0' + ((result / 10) % 10));
}
else if (result >= 10)
_putchar('0' + (result / 10));

_putchar('0' + (result % 10));
}
_putchar('\n');
}
}
}
