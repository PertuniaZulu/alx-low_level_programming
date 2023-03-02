#include "main.h"
/**
 *reverse_array - reverses the content of an array
 * @a: array.
 * @n: number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int tmp, j, c = 0;

	j = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		tmp = a[c];
		a[c++] = a[j];
		a[j--] = tmp;
	}
}

