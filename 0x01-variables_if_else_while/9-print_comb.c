#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: Always 0 (Success)
 */
int main(void)
{
		int num_dig;

		for (num_dig = 0; num_dig <= 9; num_dig++)
		{
		putchar(num_dig + '0');
		if (num_dig < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
