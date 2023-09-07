#include <stdio.h>
/**
 *main  - A program that prints the size of all the available types
 *Return (0) Success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu.\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
