#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int sal;
	int hak;

	for (sal = 0; sal < n--; sal++)
	{
		hak = a[sal];
		a[sal] = a[n];
		a[n] = hak;
	}
}
