#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints second half of line
 *
 * @str: pointer
 *
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int start_index = length / 2;

		for (i = start_index; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
}
