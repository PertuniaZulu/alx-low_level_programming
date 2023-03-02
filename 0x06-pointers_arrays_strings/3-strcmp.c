#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: first string.
 *@s2: second string.
 *Return: 0 if s1 and s2 are equals,
 *another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0, n;

	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}
	n = s1[c] - s2[c];
	return (n);
}

