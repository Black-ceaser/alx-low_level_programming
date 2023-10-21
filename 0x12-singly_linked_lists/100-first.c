#include "lists.h"
#include <stdio.h>
void print_message(void)__attribute__((constructor));
/**
 * print_message - runs before the main function
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
