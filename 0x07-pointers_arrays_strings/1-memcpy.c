#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * @n: funnction to be copied
 * @src: bytes from memory area
 * @dest: destination
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
