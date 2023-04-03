#include "main.h"
/**
 * _atoi - is a function that converts digit characters to actual integer
 * @s: is a pointer to  an array of strings
 * Return : returns an integer value
 */
int _atoi(char* s)
{
	int i = 0;
	unsigned long value = 0;
	int sign = 1;

	if (s == NULL)
	{
		return (0);
	}
	if (*s == '-')
	{
		sign = -1;
		i++;
	}
	while (*(s + i) != '\0')
	{
		while (*(s + i) < '0' || *(s + i) > '9')
		{
			i++;
		}
		value = value * 10 + (*(s + i) - '0');
		i++;
	} return (sign * value);
}
