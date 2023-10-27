#include "main.h"

/**
 * clear_bit - Clears the value of a bit to 0  at a specific index
 * @n: pointer to the unsigned to the specific number
 * @index: the index of each bit
 * Return: (1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~mask;
	*n &= mask;
	return (1);
}
