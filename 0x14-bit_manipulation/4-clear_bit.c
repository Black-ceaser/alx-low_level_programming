#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at index
 * @n: pointer to the value
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
