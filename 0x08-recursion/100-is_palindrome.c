#include "main.h"
/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: is a pointer to a string
 * @start: is the start of char array s
 * @end: is the end of char array s
 * Return: a integer
 */
int helper_palindrome(char *s, int start, int end);

int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	if ((len == 0) || (len == 1))
	{
		return (1);
	}
	else if (s[i] != s[len - 1])
	{
		return (0);
	}
	else
	{
		return (helper_palindrome(s, i, len - 1));
	}
}
/**
 * helper_palindrome - helps the main palindrome function
 * @s: is the string to be checked
 * @start: is the start of the string
 * @end:is the end of the string
 * Return: an int
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	} return (helper_palindrome(s, start + 1, end - 1));
}
