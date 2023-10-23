#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: string
 * @needle: string
 * Return: to 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *z = needle;

		while (*t == *z && *z != '\0')
		{
			t++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
