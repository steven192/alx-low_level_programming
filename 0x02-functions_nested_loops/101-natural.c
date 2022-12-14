#include <stdio.h>
/**
 * main - prints out the sum numbers that are divisble by 3 and 5
 * Return: returns 0 on success
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1024; i++)

		if (i % 5 == 0 || i % 3 == 0)
			sum = sum + i;
	printf("%d\n", sum);
	return (0);
}
