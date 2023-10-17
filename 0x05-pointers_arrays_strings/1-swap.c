#include "main.h"
/**
 * reset_to_98 - takes a pionter to  int a parameter
 * and updates the value it points to 98
 * @n: int parameter
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{       
        int sonic;

	sonic = *a;
	*a = *b;
	*b = sonic;
}
