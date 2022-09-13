#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries
 * Return: 0 on success execution.
 */
int main(void)
{
	int i = 0;
	char s[] = "_putchar";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
