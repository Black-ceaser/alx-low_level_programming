#include "main.h"

/**
 * _abs - Prints the absolute number
 * @c: The digit to be checked
 * Return: absoulute value of a number or zero
 */

int _abs(int c)
{

if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
