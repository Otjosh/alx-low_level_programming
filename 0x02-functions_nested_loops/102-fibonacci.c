#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 * The Fibonacci sequence starts with 1 and 2, and each subsequent term is
 * the sum of the previous two terms. The function prints the numbers in the
 * sequence, separated by commas and spaces, and followed by a new line.
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

/**
 * main - Entry point of the program.
 * Calls the print_fibonacci function to print the first 50 Fibonacci numbers.
 *
 * Return: Always 0 to indicate successful execution of the program.
 */
int main(void)
{
print_fibonacci();
return (0);
}
