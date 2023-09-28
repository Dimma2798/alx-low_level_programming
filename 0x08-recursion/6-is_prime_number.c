#include "main.h"

/**
 * sqrt_find - Helper function to find the square root using binary search.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * @c: The number to find the square root of.
 *
 * Return: The square root of c, or -1 if it does not have a natural square root.
 */
int sqrt_find(int low, int high, int c)
{
    if (low > high)
        return (-1);

    int mid = low + (high - low) / 2;
    long long square = (long long)mid * mid;

    if (square == c)
        return mid;
    else if (square < c)
        return sqrt_find(mid + 1, high, c);
    else
        return sqrt_find(low, mid - 1, c);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n is negative or has no natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (0);

    return sqrt_find(1, n, n);
}
 or

#include "main.h"

/**
 * sqrt_find - first checks for the square root of given number
 * @g: the root to check through
 * @c: number to find sqrt of
 *
 * Return: The sqrt of C or -1 if number does not have natural sqrt
 */

int sqrt_find(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_find(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1(if not natural square root)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}


task 6


#include "main.h"
#include <math.h> // For sqrt function

/**
 * is_prime_recursive - Helper function to check if a number is prime recursively.
 * @div: The current divisor to check.
 * @num: The number to check for primality.
 *
 * Return: 1 if prime, else 0.
 */
int is_prime_recursive(int div, int num)
{
    if (num < 2)
        return 0;
    if (div > sqrt(num))
        return 1;
    if (num % div == 0)
        return 0;

    return is_prime_recursive(div + 1, num);
}

/**
 * is_prime_number - Checks and states if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, else 0.
 */
int is_prime_number(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;

    return is_prime_recursive(2, n);
}
