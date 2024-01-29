#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * Return:
 */
void rev_string(char *s)
{
	int length = strlen(str);
	int start = 0;
	int end = length -1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}
