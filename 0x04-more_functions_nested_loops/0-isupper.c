#include "main.h"
/*
 * main: checks for uppercase characters
 * Return: 1(for uppercase characters) or 0(for therwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

