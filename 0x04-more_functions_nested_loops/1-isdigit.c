#include "main.h"

/**
 * main - Entry point
 * _isdigit - checks for a digit
 * @c: int to be checked
 *
 * Returns: 0(success), 1(otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
