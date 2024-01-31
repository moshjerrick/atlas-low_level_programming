#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int a = strlen(dest);
	int b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);

}
