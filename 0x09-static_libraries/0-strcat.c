#include "main.h"
/**
* *_strcat - appends a copy of the string pointed to by s2 to s1
*  @dest: a value
*  @src: another value
*
*  Return: dest
*/
char *_strcat(char *dest, char *src)
{
	dest = "Hello\n";
	src = "World!";
	*_strcat(dest, src);
	return (dest);
}
