#include "main.h"
/**
 * _memset - used to fill a block of memory with a specific byte value
 * @s: is a pointer to the block of the memory block
 * @b:is the byte value that will be written to each byte of the memory block
 * @n:is the number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;
	
	for(i = 0; i < n; i++)
	{
		*(s + i) = b;
	} return p;
}
