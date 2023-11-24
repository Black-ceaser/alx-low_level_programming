#include "main.h"

/**
 * binary_to_uint - converts binary to and int
 * @b: the pointer to the characters of the binary number
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result;

	if (b == NULL)
		return (0);

	for (i = 0;b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result +=1;
	}
	return (result);
}
