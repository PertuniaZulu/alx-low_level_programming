#include "main.h"

/**
* puts2 - prints character of a string,followed by new line
* @str: string to be printed
*/
void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
