#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
/*Main Description: Prints a combo of digits*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{ putchar(',');
			putchar(' ');
		}}
	putchar('\n');
	return (0);
}
