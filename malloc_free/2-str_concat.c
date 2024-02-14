#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *concat;
	int len_s1;
	int len_s2;

	len_s1 = 0;
	len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0'
		len_s2++;
	concat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		concat[len_s1 + i] = s2[i];
	concat[len_s1 + len_s2] = '\0';
	
	return concat;
}
