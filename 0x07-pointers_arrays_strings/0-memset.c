#include <stdio.h>

/**
 * _memset - Fills the first n bytes of memory witha constant value
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Number of bytes of memory area to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
