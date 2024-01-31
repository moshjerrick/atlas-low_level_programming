#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;


	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[i++] = src[k++];
		
	}
	dest[i] = '\0';

	return (dest);
}
