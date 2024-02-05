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
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return haystack;
	}
	while (*haystack != '\0')
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_needle != '\0' && *ptr_haystack == *ptr_needle)
		{
			ptr_haystack++;
			ptr_needle++;
		}
		if (*ptr_needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
