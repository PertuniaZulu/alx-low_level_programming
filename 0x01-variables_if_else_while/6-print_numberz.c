#include <stdio.h>
/**
 * main - main block
 * Description: This program prints all base 10, starting from 0 using putchar.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
