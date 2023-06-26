#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: String
 *
 * Return - On success, return 1
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
