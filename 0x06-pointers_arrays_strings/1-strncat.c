#include "main.h"

/**
 * _strncat - function to append some charx
 * @dest: first param
 * @src: second param
 * @n; integer parameter to compare index
 * Return: string to be concatenated upon
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
