#include "main.h"

/**
* is_prime_number - returns true if the number is prime
* @n: the number to check
*
* Return: 1 if the number is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
* is_prime - returns 1 if n is prime, 0 otherwise
* @n: number to be checked
* @start: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int start)
{
	if (start == 1)
		return (1);
	if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

