#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2, followed by a new line,
 *              separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev = 1, current = 2, next;

	printf("%lu, %lu", prev, current);

	for (int i = 2; i <= 98; i++)
	{
		next = prev + current;
		printf(", %lu", next);

		prev = current;
		current = next;
	}

	printf("\n");
	return (0);
}
