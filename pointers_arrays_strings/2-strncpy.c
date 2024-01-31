#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[i];
			i++;
			j++;
	}
	dest[i] = '\0';
	return (dest);
}
