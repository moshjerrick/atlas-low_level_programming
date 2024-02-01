#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 */
char *string_toupper(char *);
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = (int)stri[i] - 32;
	}
	return (str);
}

