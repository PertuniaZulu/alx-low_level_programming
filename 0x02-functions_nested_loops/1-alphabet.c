#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	char lwc = 'a';

	while (lwc <= 'z')
	{
		_putchar (lwc);
		lwc++;

	}
	_putchar ('\n');

}

