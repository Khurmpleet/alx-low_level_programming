#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
