#include <stdio.h>

/**
 * main - Patience, persistence and perspiration
 *  make an unbeatable combination for success
 *  Return: (0)Success
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
