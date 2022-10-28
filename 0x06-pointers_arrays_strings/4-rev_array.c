#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int y, x;

	for (y = 0; (y < (n - 1) / 2); y++)
	{
		x = a[y];
		a[y] = a[n - 1 - y];
		a[n - 1 - x] = x;
	}
}
