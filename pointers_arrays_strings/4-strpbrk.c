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
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr_accept = accept;
		
		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
			{
				return (s);
			}
			ptr_accept++;
		}
		s++;
	}
	return (NULL);
}
