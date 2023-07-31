#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the first occurrence in @s of any character from @accept,
 *         or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
		return (s);
	}
	s++;
	}

	return ('\0');
}
