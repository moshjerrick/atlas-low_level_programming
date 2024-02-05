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
	while (i < n && src[i] != '\0') 
		{
        	dest[i] = src[i];
        	i++;
		}
	while (0 < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
