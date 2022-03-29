#include "main.h"

/**
 * _memcpy - a function that copies the memory area
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}