#include <stdio.h>

/**
 * main - print alphabet in lower and then in uppercase alphabet
 *
 *
 * Return: (0) Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
		putchar('\n');

	return (0);
}
