#include "main.h"
/* *strcat - appends a copy of the string pointed to by s2 to the end of the string pointed to by s1
*  @s1: a value
*  @s2: another value
*/
char *_strcat(char *dest, char *src)
{
    char *dest;
    char *src;
    dest = "Hello\n";
    src = "World!";
    *dest = strcat(&dest, &src);
    printf("%c", *dest);
}
