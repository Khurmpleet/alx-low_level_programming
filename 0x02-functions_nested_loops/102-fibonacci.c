#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0 Always (success)
 */
int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
