#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int a = 0, b;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[a])
	{
		for (b = 0; b <= 7; b++)
		{
			if (str[a] == leet[b] ||
				str[a] - 32 == leet[b])
				str[a] = b + '0';
		}

		a++;
	}

	return (s);
}
