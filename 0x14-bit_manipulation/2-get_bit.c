#include "main.h"

/**
 * get_bit - returns the value of a bit at a particular index
 * @n: number to check
 * @index: index to check
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long intO * 8 - 1))
			return (-1);
		divisor = 1 << index;
		check = n & divisor;
		if (check == divisor)
			return (1);
	return (0);
}
