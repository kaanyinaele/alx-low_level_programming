#include "main.h"

/**
* factorial - searches for the factorial of a number
* @n: the number to find the factorial of
*
* Return: the factorial of the number
*/
int factorial(int n)
{
	return (n == 0 ? 1 : (n < 0 ? -1 : n * factorial(n - 1)));
}

