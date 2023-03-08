#include "main.h"
/*
 * _puts_recursion - prints string followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	char n;
	if (s == 0)

	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
