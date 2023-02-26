#include "main.h"
/**
 * more_numbers - Prints 10 times the number from 0 to 14
 *
 * Description: Use _putchar function only thrice
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		_putchar("%d", i);
	}
	_putchar("%d", j);
	_putchar('\n');
}
