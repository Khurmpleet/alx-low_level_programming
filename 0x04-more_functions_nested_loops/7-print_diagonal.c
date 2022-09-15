#include "main.h"

/**
 * print_diagonal - prints diagonal line using "\" character of n length
 *@n: length of the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int draw, space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
