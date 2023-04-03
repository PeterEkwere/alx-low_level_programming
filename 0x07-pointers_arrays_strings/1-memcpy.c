#include "main.h"
/**
 * _memcpy - used to fill a block of memory with a specific byte value
 * @dest: is a pointer to the block of the memory block
 * @src:is the byte value that will be written to each byte of the memory block
 * @n:is the number of bytes to be filled
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	} return p;
}
