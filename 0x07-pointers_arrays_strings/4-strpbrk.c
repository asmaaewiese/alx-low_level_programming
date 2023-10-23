#include "main.h"
/**
 * _strpbrk - gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: to 0
 */
char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
		if (*s == accept[d])
		return (s);
		}
	s++;
	}
	return ('\0');
}
