#include "main.h"
/**
 *print_sign - determines if the input is >, < or = to 0
 *Description: function that prints a sign of a number using _putchar
 *@n: input
 *Return: 1, print '+' if n > 0, 0, print 0 if n = 0,-1, print '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}


