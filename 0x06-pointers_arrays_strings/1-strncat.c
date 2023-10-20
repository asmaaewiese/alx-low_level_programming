#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destenation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
 */

char *_stract(char *dest, char *scr, int n)
{       
       int c, i;

       c= 0;
       /*find the size of  dest array*/
       while (dest[c])
               c++;
       /**
	* src does not need to be null terminated
	* if it contains n or more bytes
	*/
       for (i = 0; i < n && src[i] !='\0' ; i++)
	       dest[c + i} = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';
  	
	return (dest);
}	
		   
