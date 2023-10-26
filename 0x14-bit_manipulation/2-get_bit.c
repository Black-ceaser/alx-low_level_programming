#include "main.h"
/**
 * get_bit - returns the value of a bit at a  given index
 * @n: checks the value of the a number
 * @index: point of interest
 * Return: (0);
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
