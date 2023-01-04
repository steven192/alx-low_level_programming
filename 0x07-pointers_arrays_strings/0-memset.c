#include "main.h"
/**
 * _memset -fils memeory with a constant byte
 * @s:source string
 * @b:the constant byte for filling
 * @n:length of buffer
 * Return:new string
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n ; i++)
{
	s(i) = b;
}
return (s);
}
