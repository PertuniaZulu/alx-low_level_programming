#include "main.h"

/**
 *print_alphabet_x10 - function that prints the alphabet 10 times
 *Return - 0
 */
void print_alphabet_x10(void)
{
int c = 0;
while (c < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
c++;
}
}


