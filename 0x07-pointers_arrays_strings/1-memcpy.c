#include "main.h"
/**
 * _memcpy - Program that copies memory area
 * @src: memory location to be copied from
 * @dest: memory location to be copied to
 * @n: number of bytes
 * Return: (n)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
