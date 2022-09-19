#include "main.h"

/**
 * puts_half - Prints the half a string
 * @str: Char array string type
 */

void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	len++

	for (len /= 2; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
