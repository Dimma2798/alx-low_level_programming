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

