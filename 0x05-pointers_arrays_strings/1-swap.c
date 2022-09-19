#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer argument 1
 * @b: pointer argument 2
 */

void swap_int(int *a, int *b)
{
	int swwp;

	swwp = *a;
	*a = *b;
	*b = swwp;

}
