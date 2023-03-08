#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)

	{
		printf("\n");
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
