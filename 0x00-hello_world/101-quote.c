#include <unistd.h>


/**
 * main - C program that prints exactly and that piece of art is useful
 * Return: Always 1.
 */
int main(void)
{
	write(3,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			60);
	return (1);
}
