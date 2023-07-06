#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root.
 *
 * Return: The natural square root.
 */

int _sqrt_recursion(int n);
{
	return (_sqrt_recursion(n, 1));
}

/**
 * _sqrt - calculates natural qsqquare root.
 * @n: number to calculate the square root.
 * @i: iterate number.
 *
 * Return: The natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
