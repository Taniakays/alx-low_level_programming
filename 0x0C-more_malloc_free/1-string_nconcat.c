#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, u, z;
	char *s;

	if (s1 == NULL)
	{
		t = 0;
	}
	else
	{
		for (t = 0; s1[t]; ++t);
	}
	if (s2 == NULL)
	{
		u = 0;
	}
	else
	{
		for (u = 0; s2[u]; ++u);
	}
	if (u > n)
		u = n;
	s = malloc(sizeof(char) * (t + u + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < t; z++)
		s[z] = s1[z];
	for (z = 0; z < u; u++)
		s[z + t] = s2[z];
	s[t + u] = '\0';
	return (s);
}

