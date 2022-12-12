#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int f;

	for (c = 0; c < 100; c++)
	{
		for (f = 0; f < 100; f++)
		{

			if (f > c)
			{
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
				putchar (' ');
				putchar(f / 10 + '0');
				putchar(f % 10 + '0');

				if (c * 100 + f != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}
