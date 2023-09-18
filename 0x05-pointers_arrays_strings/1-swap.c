#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @n: the integer 
 * return: void
 */

void swap_int(int *a, int * b)
{
	int m;

	m = *a;
	*b = *a;
	*b = m;
}
