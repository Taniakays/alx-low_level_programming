#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the character to check
 * Return: 0
 */

void print_rev(char *s)
{
	int string = 0;
	int i, n;

	for (string = 0; s[string] != '\0'; string++)
		;
	for (string--; string >= 0; string--)
		_putchar(s[string]);
	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
