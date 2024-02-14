#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates a string
 *
 * @str: pointer
 *
 * Return: NULL if str = null
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	length = 0;
	while (str[length] != '\0')
		length ++;
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	
	return (duplicate);
}
