#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, lgth = 0;

	while (dest[i++])
	{
		lgth++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[lgth++] = src[i];
	}
	return (dest);
}
