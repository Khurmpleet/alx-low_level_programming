#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num = 0x00000001;
	char *c = (char *)&num;

	return (c[0]);
}
