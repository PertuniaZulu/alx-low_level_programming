#include "main.h"

/**
 *_islower - Check Main
 *@c: the input
 *Description: function uses _putchar to print
 *Return: 1 if its a lowercase or 0 if not lowercase
 */
int _islower(int c)
{
	char i;
	int lwc = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lwc = 1;
	}
	return (lwc);
}

