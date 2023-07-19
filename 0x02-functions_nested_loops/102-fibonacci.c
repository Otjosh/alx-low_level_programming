#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 98;
unsigned long int *fib;
int i;

fib = malloc((n + 1) * sizeof(unsigned long int));
if (fib == NULL)
{
printf("Memory allocation failed!\n");
return (1);
}

fib[0] = 1;
fib[1] = 2;

for (i = 2; i <= n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < n; i++)
{
printf("%lu, ", fib[i]);
}

printf("%lu\n", fib[n]);

free(fib);

return (0);
}
