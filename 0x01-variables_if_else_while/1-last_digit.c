#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return - always return 0
 *
 */
int main(void)
{
	int n;
       int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
       lastdig = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}

	return (0);
}
