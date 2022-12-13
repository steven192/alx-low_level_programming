#include "main.h"

/**
 * print_last _digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print _last_digit(int n)
{

	int ld = n % 10;

	if (ld < 98)
		ld *= 1;

	_putchar(ld + '0');

	return (0);
}
