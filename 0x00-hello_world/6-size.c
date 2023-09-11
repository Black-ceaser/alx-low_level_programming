#include <stdio.h>
/**
 *main  - A program that prints the size of all the available types
 *Return: (0)Success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size a of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size an of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size a of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size a of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size a of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
