#include "main.h"
int main(void)
{
    char str[] = "The quick brown fox";
    const char delim[] = " ";
    char *token;
    token = _strtok(str, delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = _strtok(NULL, delim);
    }
    return 0;
}
