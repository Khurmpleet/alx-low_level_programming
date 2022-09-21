#include "main.h"

/**
 * _strcat - Concatenate two strimgs
 * @dest: String to be appended to
 * @src: String to append
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);

}
/*
 *  Hopefully this is the same using pointer notation
 *  char *_strcat(char *dest, char *src)
 *  {
 *	int i,j;
 *	for (i = 0; *(dest + i); i++)
 *		;
 *	for (j = 0; *(src + j); j++)
 *	{
 *		*(dest+i) = *(src+j)
 *		i++;
 *	}
 *	*(dest+i) = '\0';
 *	return (dest);
 *	}
 */
