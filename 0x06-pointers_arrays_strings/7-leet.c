#include "main.h"
/**
 * leet - is a function that encodes a string to 1337
 *
 * @s: is a pointer to an integer
 * Return: a char
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = 4 + '0';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = 3 + '0';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = 0 + '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = 7 + '0';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = 1 + '0';
		}
	} return (s);
}
