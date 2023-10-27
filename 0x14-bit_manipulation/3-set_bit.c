#include "main.h"

/**
 * set_bit - sets a bit to at a specifc index to 1
 * @n: a pointer to the specific index
 * @index: the specific index in question
 *Return: (1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}

