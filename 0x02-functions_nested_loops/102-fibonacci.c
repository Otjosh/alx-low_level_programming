#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
unsigned long int a, b, c;
int count;

a = 1;
b = 2;

printf("%lu, %lu", a, b);

for (count = 2; count < 50; count++)
{
c = a + b;
printf(", %lu", c);
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
