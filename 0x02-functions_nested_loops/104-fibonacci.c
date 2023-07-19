#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
unsigned long int prev = 1, current = 2, next;

printf("%lu", prev);

for (int i = 2; i <= 98; i++)
{
printf(", %lu", current);

next = prev + current;
prev = current;
current = next;
}

printf("\n");
}

int main(void)
{
print_fibonacci();
return 0;
}
