#include <stdio.>
#include <time.h>

/**
 * main-Entry point
 * Description: Get a random number and print it
 * determine if it is positive,negative or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0);
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	retun(0);
}	
