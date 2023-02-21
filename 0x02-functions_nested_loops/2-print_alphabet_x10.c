#include "main.h"

/**
 *print_alphabet_x10 - Check Main
 *Description: function prints alphabet 10 times
 *using _putchar
 *Return - nothing
 */

void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
}
