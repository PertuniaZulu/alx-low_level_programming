#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * a = row, b = column, c = current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
k = b * a;
if (b  == 0)
{
_putchar(c + '0');
}
if (c < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
else if (c >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}


