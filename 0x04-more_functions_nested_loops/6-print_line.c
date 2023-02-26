#include "main.h"
/**
 * print_line - prints a straight line
 * @n: number of times the character _ is printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n++)
			_putchar("_\n");
	}
}
