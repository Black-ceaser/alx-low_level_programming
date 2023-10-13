#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A program that returns the sum of all parameters
 * @n: The number of parmaters passed to the function
 * @... : variable number of parameters to calculate the sum of
 * Return: if n == 0 - 0
 *  Otherwise -  the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i, sum = 0;

	va_start(ad, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ad, int);
	va_end(ad);
	return (sum);
}
