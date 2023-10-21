#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @naaw: pointer
 *
 * Return: n
 */
char *string_toupper(char *naaw)
{
	int suk;

	suk = 0;
	while (naaw[suk] != '\0')
	{
		if (naaw[suk] >= 'a' && naaw[suk] <= 'z')
			naaw[suk] = naaw[suk] - 32;
		suk++;
	}
	return (naaw);
}

