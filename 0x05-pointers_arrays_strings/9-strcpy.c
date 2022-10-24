#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: char to check
 * @src: char to check
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
			len++;
	}

	*(dest + len) = '\0';
	return (dest);

}
