#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%i", number);
	}
	putchar('\n');

	return (0);
}
