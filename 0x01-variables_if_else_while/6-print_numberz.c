#include <stdio.h>

/**
 * main - Creating a do while loop
 * Return: (0)Success
 */

int main(void)
{
	int number;

	number = 0;

	do {
		putchar(number + '0');
		putchar('\n');
		number++;
	}
	while (number <= 9);
	return 0;
}
