#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints a randonm number and displays
 * if the number is positive, negative or zero
 *Return: (0) Success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAN_MAX / 2;
	if (n > 0)
		printf("%d is a postive\n" n);
	else if (n == 0)
		printf("%d is zero\n" n);
	else
		printf("%d is a negative\n" n);
	return (0);
}
