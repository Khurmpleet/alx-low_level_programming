#include "main.h"

/**
 * print_line - prints line using "_" character of n length
 *@n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
		_putchar('_');

	_putchar('\n');
}
