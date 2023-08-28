#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to a dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog owner's name
 *
 * Description: Initializes a dog structure with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Print dog information
 * @d: Pointer to a dog structure
 *
 * Description: Prints the information stored in a dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Create a new dog instance
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog owner's name
 * Return: Pointer to the newly created dog instance
 *
 * Description: Creates a new dog instance and initializes its members.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free dog instance memory
 * @d: Pointer to a dog instance
 *
 * Description: Frees the memory allocated for a dog instance.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 *
 * Description: Copies the source string to the destination buffer.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculate string length
 * @s: Input string
 * Return: Length of the string
 *
 * Description: Calculates the length of the input string.
 */
int _strlen(char *s);

#endif
