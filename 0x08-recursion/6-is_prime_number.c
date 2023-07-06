#include "main.h"

/**
 * is_prime_number - determines if number is prime
 * @n: number to be tested
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int is_prime = 0;

	if (n < 2)
		is_prime = 0;
	else if (n == 2)
		is_prime = 1;
	else if (n % 2 == 1)
		is_prime = 1;
	return (is_prime);
}
