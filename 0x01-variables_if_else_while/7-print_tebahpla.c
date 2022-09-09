#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reversed order
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char digits;

	for (digits = 'z'; digits >= 'a'; digits--)
	{
		putchar(digits);
	}
	putchar('\n');

	return (0);
}

