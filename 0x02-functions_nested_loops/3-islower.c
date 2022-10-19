#include "main.h"
/**
 * _islower - check if a char is a lowercase
 *@c:the character to be checked
 *Return: 1 if letter is lower case, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
