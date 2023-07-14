#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        printf("Size of char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
        printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
        printf("Size of float: %d bytes(s)\n", sizeof(float));
        return(0);
