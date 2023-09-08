#include <stdlib.h>
#include <time.h>
/*
 * main - printing random numbers and their last digits n 
 *Return - Always (0)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}
	if else ( n % 10 == 0)
	{
		print f("%d and is 0\n", n % 10);
	}
	else (n % 10 < 6)
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
