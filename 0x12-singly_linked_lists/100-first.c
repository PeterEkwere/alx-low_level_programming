#include <stdio.h>
/**
 * first_100 - is a function that will print
 * Before the main.c program
 * Return: void;
 */
void __attribute__((constructor)) first_100(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
