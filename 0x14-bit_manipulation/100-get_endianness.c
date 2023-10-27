#include "main.h"
/**
 * get_endianness - checks the endianness of the system
 * Return: (0)
 */
int get_endianness(void)
{
	union union_endianness test;

	test.i = 1;

	return (test.c[0] == 1);
}
