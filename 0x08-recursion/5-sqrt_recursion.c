#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - returns the square root of a number using recursion
 * @n: original number
 * @guess: current guess
 *
 * Return: the square root of n
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
