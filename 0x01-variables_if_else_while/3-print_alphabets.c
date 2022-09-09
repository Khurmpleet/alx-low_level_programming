#include <stdio.h>

/**
 * main - print alphabet in lower and then in uppercase alphabet
 *
 *
 * Return: (0) Success
 */
int main(void)
{
char lower_c;

for (lower_c = 'a' ; lower_c <= 'z' ; lower_c++)
{
putchar(lower_c);

char upper_c;

for (upper_c = 'A' ; upper_c <= 'Z' ; upper_c++)
{
putchar(upper_c);
}
putchar('\n');
return (0);
}
