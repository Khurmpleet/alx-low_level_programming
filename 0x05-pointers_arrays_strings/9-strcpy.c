#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src to given memory
 * @dest: Copy source to this buffer
 * @src: This is the source to copy
 * Return: Copy of Origial source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
