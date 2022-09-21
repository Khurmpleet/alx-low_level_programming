#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 * @a: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > 'a' && a[i] <= 'z')
			a[i] = a[i] - 'a' + 'A';
	}
	return (a);
}
