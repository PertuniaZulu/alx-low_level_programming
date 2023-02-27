#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{
	int rands;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		rands = (rand() % 125) + 1;
		printf("%c", rands);
		total -= rands;
	}
	printf("%c", total);

	return (0);
}
