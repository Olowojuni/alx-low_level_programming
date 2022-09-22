#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @scr to
 * the end of the string pointed to by @dest.
 *
 * @dest: string that will be appended
 * @scr: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *scr)
{

	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
