#include "main.h"

/**
 * *_strcat - function concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	i = 0;
	j = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
