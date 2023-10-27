#ifndef BIT_MAN
#define BIT_MAN
/**
 * union union_endianness- Union to check system endianness
 * @i: intger value for endianness
 * @c: charater array to interpret the integer
 */
union union_endianness
{
	unsigned int i;/**< Integer value for endianness check*/

	char c[sizeof(unsigned int)];
} test;
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
#endif /*BIT_MAN*/
