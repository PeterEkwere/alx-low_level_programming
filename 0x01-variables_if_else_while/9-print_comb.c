#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
*Return:Always 0 success
*/

int main(void)
{
        int ch;
                for (ch = 48; ch < 58; ch++)
        {
                if (ch == 57)
                {
                        putchar(ch);
                        break;
                }
                else
                {
                        putchar(ch);
                        putchar(',');
                        putchar(' ');
                }
        } return (0);
}
