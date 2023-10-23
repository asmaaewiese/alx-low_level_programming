#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: string
 * @size: string
 * Return: to 0
 */
void print_diagsums(int *a, int size)
{
	int r1, r2, hg;

	r1 = 0;
	r2 = 0;

	for (hg = 0; hg < size; hg++)
	{
		r1 = r1 + a[hg * size + hg];
	}
	for (hg = size - 1; hg >= 0; hg--)
	{
		r2 += a[hg * size + (size - hg - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
