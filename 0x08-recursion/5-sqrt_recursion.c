#include "main.h"

/**
 * _sqrt_recursion - Main Recursive function
 * @n: Int number
 * Return: Int
 */

int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}

/**
 * is_sqrt - Function to check if it's a natural sqrt
 * @n: Int Num
 * @i: INt NUm
 * Return: sqrt
 */

int is_sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (is_sqrt(n, i + 1));
}
