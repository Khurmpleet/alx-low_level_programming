#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 16 in lowercase
 * Use only putchar maximum of three times
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (digit = 'a'; digit < 'g'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
