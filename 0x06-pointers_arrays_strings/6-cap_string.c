#include "main.h"
/** 
 * *cap_string - CApitalizes all words of a string
 * Description: Separators of words: space, tabulation, new line
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		if (str[i - 1] == ' ' || 
		    str[i - 1] == '\t' || 
		    str[i - 1] == '\n' || 
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
