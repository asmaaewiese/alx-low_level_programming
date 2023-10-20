#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings.
 * @dest: pointer to destenation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */
char *_stract(char *dest, char *scr)
{       
       int c, c2;
       c= 0;
       /*find the size dest array*/
       while (dest[c])
	       c++;
       /* interate thriugh eash src array value without the null byte*/
       for (c2 = 0; src[c2]; c++)
	       /*append src[c2] to desr[c] while overwritting the null byte in dest*/
	       dest[c++] = src[c2];
       return (dest);
}       
