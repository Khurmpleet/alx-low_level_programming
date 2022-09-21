#include "main.h"

/**
 * _strncat - function to concatenate two strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

/**
 * _strncat - function to concatenate two strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 *
 *
 * char *_strncat(char *dest, char *src, int n)
 * {
 *	//while dest exists and isn't null terminator yet
 *	while (*dest)
 *		dest++;
 *	// replace dest while src exists and insert nulls till n bytes
 *	for (i = 0; i < n; i++)
 *	{
 *		while (*src)
 *		{
 *			*dest = *src;
 *			dest++;
 *			src++;
 *		}
 *		*dest = '\0';
 *	}
 * }
 */
