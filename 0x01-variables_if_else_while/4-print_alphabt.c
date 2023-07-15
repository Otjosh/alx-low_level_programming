#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet excluding 'q' and 'e'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
		putchar(l != 'q' && l != 'e' ? l : 0), l++;
	
	putchar('\n');

	return (0);
}
