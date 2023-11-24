#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a particular index
 * @n: number to be set
 * @index: index of the number to be changed
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
			return (-1);
		set = 1 << index;
		*n = *n | set;
		return (1);
}
