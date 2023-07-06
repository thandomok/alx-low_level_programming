#include "main.h"

/**
 * number - finds the natural square root of a number.
 * @n: number to calculate the square root starting from 1.
 * @root: the square root number to be found
 *
 * Return: If n does not have a natural square root,
 * the function should return -1.
 */

int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - calculates natural square root of a number.
 * @n: number where square root is found.
 *
 * Return: The natural square root n. function returns to -1,
 * if n does not have natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
