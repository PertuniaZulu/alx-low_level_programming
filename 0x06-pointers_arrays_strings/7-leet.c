#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int a, b;
	char i = "aAeEoOtTlL";
	char j = "4433007711";

	a = 0;

	while (s[a] != '\0')
	{
		a = 0;
		while (b < 10)
		{
			if (i[b] == s[a])
			{
				s[a] = j[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}

