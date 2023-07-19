#include <stdio.h>

/**
 * main - Entry point
 * Description: Finds and prints the sum of the even-valued terms
 *              in the Fibonacci sequence whose values do not exceed 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
int limit = 4000000;
int prev = 1, current = 2, next = 0;
long long sum = 0;

while (current <= limit)
{
if (current % 2 == 0)
sum += current;

next = prev + current;
prev = current;
current = next;
}

printf("Sum of even-valued terms in Fibonacci sequence: %lld\n", sum);

return (0);
}
