#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return:Always 0 success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int len = strlen(n[])
	int LastDigit = n[len - 1]
	if (LastDigit < 6 && LastDigit != 0){
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LastDigit);
	} else if (LastDigit > 5){
		 printf("Last digit of %i is %i and is greater than 5\n", n, LastDigit);
	} else {
		break;
	} return (0);

