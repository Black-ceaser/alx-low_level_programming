#include <stdio.h>

/**
 * main - A program that prints the alphabets in reverse order
 * Return: (0)Success
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
