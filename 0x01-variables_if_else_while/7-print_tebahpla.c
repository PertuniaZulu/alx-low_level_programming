#include <stdio.h>
/**
 * main - main block
 * Description: this program prints lowercases alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
