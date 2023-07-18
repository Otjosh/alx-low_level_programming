#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, assigns a random number to 'n' and prints its last digit.
 *
 * Description: This program generates a random number and stores it in the variable 'n'.
 *              It then prints the last digit of the number and provides additional information
 *              about the last digit, such as whether it is greater than 5, 0, or less than 6.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, n % 10);

	if (n % 10 > 5)
		printf(" and is greater than 5\n");
	else if (n % 10 == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
