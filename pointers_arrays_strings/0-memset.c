#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *function _memset - setting first num bytes
 *@s: pointer
 *@b: char
 *@n: int
 *
 *Return: (s)
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
