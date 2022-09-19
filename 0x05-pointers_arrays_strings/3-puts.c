#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: String to print
 */

void _puts(char *str)
{
	int letter;

	for (letter = 0; *str != '\0'; letter++)
	{
		_putchar(*(str + letter));
	}
	_putchar('\n');
}
