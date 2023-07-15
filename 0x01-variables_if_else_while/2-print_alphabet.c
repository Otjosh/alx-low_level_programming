#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet using a while loop.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
