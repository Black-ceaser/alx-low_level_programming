#include "main.h"

/**
 * swap_int - A program that swaps the value of two integers
 * @a: the first value to be swaped
 * @b: the second value to be swaped
 * Return: (void)success
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
