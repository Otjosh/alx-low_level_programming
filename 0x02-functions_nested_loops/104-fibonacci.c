#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers are separated by a comma, followed by a space.
 *
 * * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int prev = 1, current = 2, next = 0;
int count;

printf("%lu, %lu", prev, current);

for (count = 3; count <= 98; count++)
{
next = prev + current;
printf(", %lu", next);

prev = current;
current = next;
}

printf("\n");

return (0);
}
