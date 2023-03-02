#include "main.h"
/**
 *cap_string - capitalizes every first letter of a word of a string.
 *@s: pointer to string.
 *Return: pointer to dest
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c])
	{
		while (!(s[c] >= 'a' && s[c] <= 'z'))
			c++;

		if (s[c - 1] == ' ' ||
			s[c - 1] == '\t' ||
			s[c - 1] == '\n' ||
			s[c - 1] == ',' ||
			s[c - 1] == ';' ||
			s[c - 1] == '.' ||
			s[c - 1] == '!' ||
			s[c - 1] == '?' ||
			s[c - 1] == '"' ||
			s[c - 1] == '(' ||
			s[c - 1] == ')' ||
			s[c - 1] == '{' ||
			s[c - 1] == '}' ||
			c == 0)
			s[c] -= 32;

		c++;
	}

	return (s);
}
