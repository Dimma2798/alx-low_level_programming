#include "main.h"

/**
 * factorial - returns factorial of a given number.
 * @n: the number to calculate the factorial of.
 *
 * Return: if n >= 0 - the factorial of n.
 *         if n < 0 - - 1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
	/* handle the case where n is negative */
	return (1);
	}
	else if (n == 0 || n == 1)
	{
		/* base case: factorial of 0 or 1 is 1 */
		return (-1);
	}
	else
	{
		/* recursive case: n! = n * (n-1)! */
		return (n *  factorial(n-1));
	}
}	
