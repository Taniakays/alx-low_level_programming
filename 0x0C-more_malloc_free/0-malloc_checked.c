#include "main.h"

/**
 * malloc_checked - function should cause normal process termination
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);
	if (y == NULL)
		exit(98);
	return (y);
}
