#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Char array string type
 */

void rev_string(char *s)
{
	int i, c, len;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	for (i--, c = 0; c < len / 2; i--, c++)
	{
		tmp = s[c];
		s[c] = s[i];
		s[i] = tmp;
	}
}
