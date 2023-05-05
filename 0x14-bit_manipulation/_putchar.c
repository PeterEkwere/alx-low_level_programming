#include "main.h"
#include "unistd.h"
/**
 * _putchar - is a function that write
 * a character to the standard output
 *
 * @c: is the character to print
 * Return:  if successfull 1 on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
