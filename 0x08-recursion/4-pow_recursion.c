#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
    /* Handle the case where y is negative */
    if (y < 0)
    {
        /* Negative exponent, return -1 (undefined) */
        return (-1);
    }
    /* Base case: x^0 is always 1 */
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        /* Recursive case: x^y = x * x^(y-1) */
        return (x * _pow_recursion(x, y - 1));
    }
}
