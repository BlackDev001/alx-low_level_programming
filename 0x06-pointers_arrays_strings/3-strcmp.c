#include "main.h"
/**
 * _strcmp - compares two strings
 * Description: we have to comare two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
	}
	s1++;
	s2++;
}

