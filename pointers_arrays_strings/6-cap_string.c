#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *cap_string - capitalizing words in strings
 *
 *
 *
 *Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i])
	{
		str[i] = toupper((unsigned char)str[i]);
	}
	
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;

			if (str[i])
		{
		str[i] = toupper((unsigned char)str[i]);
	}
	}
		else
		{
			i++;
	}
	}
	return (str);
}
