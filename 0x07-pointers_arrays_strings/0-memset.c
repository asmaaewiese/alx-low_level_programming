#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s:pointer to put the  constant
 * @b: constant
 * @n: number of bytes to be changed
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
