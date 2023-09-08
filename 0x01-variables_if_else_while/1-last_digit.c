#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: for function
 *
 * Return: Always 0 success
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	if (n > 5)
	{
	printf("%d and is > 5\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else
	{
	printf("%d and is <  6 and ! 0\n", n);
	}

	return (0);
}
