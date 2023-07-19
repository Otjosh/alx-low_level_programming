#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 Fibonacci numbers,
 *              separated by a comma and a space, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 50;
int fib[n];
int i;

/* First two Fibonacci numbers */
fib[0] = 1;
fib[1] = 2;

/* Compute the rest of the Fibonacci numbers */
for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

/* Print the Fibonacci numbers separated by comma and space */

for (i = 0; i < n - 1; i++)
{
printf("%d, ", fib[i]);
}

/* Print the last Fibonacci number followed by a new line */
printf("%d\n", fib[n - 1]);

return (0);
}
