#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * Return:
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length -1;

	while (start < end)
	{
		char temp = s[start];
		str[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
