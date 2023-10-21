#include "main.h"
/**
 * _strcmp - compare two string values
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1[wep] - s2[wep]
 */
int _strcmp(char *s1, char *s2)
{
	int wep;

	wep = 0;
	while (s1[wep] != '\0' && s2[wep] != '\0')
	{
		if (s1[wep] != s2[wep])
		{
			return (s1[wep] - s2[wep]);
		}
		wep++;
	}
	return (0);
}

