#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return s;
	}
	s++;
	}
	return NULL;
}
