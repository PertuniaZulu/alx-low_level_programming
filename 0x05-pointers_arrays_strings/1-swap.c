#include "main.h"

/**
 *swap_int - swaps the value of integers
 *@a: integer to be swapped
 *@b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
