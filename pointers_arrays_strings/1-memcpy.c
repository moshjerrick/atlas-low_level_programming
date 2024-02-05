#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *memcpy - copies memory
 *
 *
 *@dest: destination
 *@src: source
 *@n: usigned interger
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
