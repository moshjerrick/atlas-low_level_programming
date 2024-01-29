#include "main.h"
#include <stdio.h>
/**
 * puts_half - 
 *
 * @str:
 *
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(*str);
	int start_index = length / 2;

		for (i = start_index; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
}
