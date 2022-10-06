#include <stdlib.h>

/**
 * *array_range - creates an array of integers and stores numbers min to max,
 * both inclusive in the array
 * @min: smallest number to be stored
 * @max: largest number to be stored
 *
 * Return: pointer to the newly created array on success,
 * else NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
