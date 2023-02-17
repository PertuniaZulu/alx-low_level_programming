#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This program prints an alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
