#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
unsigned long int a = 1, b = 2, c;

printf("%lu", a);

for (int i = 2; i <= 98; i++)
{
printf(", %lu", b);

c = a + b;
a = b;
b = c;
}

printf("\n");
}

int main(void)
{
print_fibonacci();
return (0);
}
