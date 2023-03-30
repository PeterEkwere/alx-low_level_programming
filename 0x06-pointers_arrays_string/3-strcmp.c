/**
 * _strcmp - is a function that append and array with another array
 * @s1: is a pointer to an array
 * @s2: is  a pointer to an array
 * Return: it will return an the pointer to the destination array
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			int ch = (*(s1 + i) - *(s2 + i));

			return (ch);
		}
	} return (0);
}
