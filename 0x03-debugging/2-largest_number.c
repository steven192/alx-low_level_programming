#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first intiger
 * @b: second intiger
 * @c: third intiger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if  (b > c)
			largest = b;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
