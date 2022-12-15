#include "Main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int Largest;

if (a >= b && a >= c)

{
	Largest = a;
}
else if (b >= a && b >= c)

{
	Largest = b;
}

else

{
	Largest = c;
}

return (Largest);
}
