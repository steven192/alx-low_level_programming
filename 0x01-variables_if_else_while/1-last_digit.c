#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		prinf("last digit of %i is %i is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i is 0\n", n, last);
	else if (last < 6)
		printf("last digit of %i is %i and is less than 5 and not 0\n", n, last);
	return (0);
}
