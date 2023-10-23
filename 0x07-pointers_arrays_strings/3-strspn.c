#include "main.h"
/**
 * _strspn - Entry point
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				y++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}

