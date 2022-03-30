#include "main.h"

/**
 * factorial - eturns the factorial of a given number.
 *
 * @n: number to calculate its factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
