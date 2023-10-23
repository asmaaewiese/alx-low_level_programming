#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area
 * @src: source
 * *@n: lenght of src to be copied
 *
 * Return: cthe pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int p = n;

	for (; k < p; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

