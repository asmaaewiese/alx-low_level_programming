#include "main.h"
/**
 * _strchr - fills memory with a constant byte
 * @s: constant
 * @c: constant
 * Return: pointer to 0
 */
char *_strchr(char *s, char c)
{
	int mem = 0;

	for (; s[mem] >= '\0'; mem++)
	{
		if (s[mem] == c)
			return (&s[mem]);
	}
	return (0);
}

