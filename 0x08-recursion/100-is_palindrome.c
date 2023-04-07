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
int len(char *s);
int is_palindrome(char *s)
{
	int i = 0;
	int length = len(s);
	if ((length == 0) || (length == 1))
	{
		return (1);
	}
	else if (s[i] != s[length - 1])
	{
		return (0);
	}
	else
	{
		return (helper_palindrome(s, i, length - 1));
	}
}
/**
 * len - gets the length of a string
 * @s: is a pointer to a string
 * Return: an integer
 */
int len(char *s)
{
	int i = 0;
	if (*(s + i) == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + len(s + 1));
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
