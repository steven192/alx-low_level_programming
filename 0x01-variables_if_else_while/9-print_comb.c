#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all  single number of base 10
 * starting from 0, followed by a new line
 * Ruturn: Always 0 (Success)
 */
int main(void)
{

	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
