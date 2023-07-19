#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 1024;
int i, sum = 0;

for (i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);

return (0);
}
