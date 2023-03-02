#include "main.h"
/**
 * _strcmp - compares two strings
 * Description: we have to comare two strings
 * @s1: value to compare
 * @s2: value to compare
 *
 * Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

