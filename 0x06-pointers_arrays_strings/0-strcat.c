/**
 * _strcat - is a function that append and array with another array
 * @src: is also a pointer to an integer array
 * @dest:is also a pointer to an  integer array
 * Return: it will return an the pointer to the destination array
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j) != '\0'; j++, i++)
	{
		*(dest + i) =  *(src + j);
	} *(dest + i) = '\0';
	return (dest);
}
