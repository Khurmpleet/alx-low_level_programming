#include "main.h"

/**
 * print_rev - Prints a string in reverse, then a new line
 * @s: String to reverse
 */

void print_rev(char *s)
{
	int len;
	
	/* Iteration to find the length of string and point to last character */
	for (len = 0; s[len] != '\0'; len++)
		;
	
	/* Itertion to return to character before null and print the string reversed*/
	for (len--; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');

}
