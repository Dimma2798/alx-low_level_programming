#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generate random numbers to print negative and poistive
 * Return - Always (0)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() _RAND_MAX / 2;
		if (n > 0)
		{
			printf("%d is postive\n", n);
		}

		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else (n < 0)
		{
			printf("%d is negative\n", n);
		}
		return (0)
}

