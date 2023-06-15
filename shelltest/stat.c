#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

int check_existence(char *file_name)
{
        if (access(file_name, F_OK) == 0)
        {
                printf("%s: Found\n", file_name);
                return (0);
        }
        else
        {
                printf("%s: Not found\n", file_name);
                return (-1);
        }
        return (0);

}
/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    unsigned int i;

    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
    while (av[i])
    {
        check_existence(av[i]);
        i++;
    }
    return (0);
}
