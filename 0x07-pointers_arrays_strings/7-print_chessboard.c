#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: an array
 * Return: to 0
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int q;

	for (h = 0; h < 8; h++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[h][q]);
		_putchar('\n');
	}
}
