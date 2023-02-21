#include "main.h"

/**
 *print_alphabet_x10 - Check Main
 *Description: function prints alphabet 10 times
 *using _putchar
 *Return - nothing
 */

void print_alphabet_x10(void)
{
	int c;
	char i;

	for (c = 'a'; i <= 'z'; c++)
	{
		for (i = 'a'; c <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
