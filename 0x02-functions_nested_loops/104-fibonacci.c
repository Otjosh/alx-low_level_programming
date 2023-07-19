#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2, followed by a new line,
 *              separated by a comma and a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 98;
unsigned long int prev = 1, current = 2, next = 0;
int count = 2;

printf("%lu, %lu", prev, current);

while (count < n)
{
next = prev + current;
printf(", %lu", next);

prev = current;
current = next;
count++;
}

printf("\n");
return (0);
}
