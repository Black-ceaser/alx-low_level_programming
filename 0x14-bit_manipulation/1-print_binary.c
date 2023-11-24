#include "main.h"

/**
 * _pow - prints the binary representation of a number
 * @base: base of number
 * @power: power of number
 * Return: value of base
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *=base;
	return (num);
}

/**
 * print_binary - prints a number in binary
 * @n: number printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizedof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		ele if (flag == 1 || divisor == 1)
		{
			_putcahr('0');
		}
		divisor >>= 1;
	}
}
