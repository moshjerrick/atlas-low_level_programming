#include "main.h"
#include <stdio.h>
/**
 * _strlen - 
 *
 * @s: string
 *
 * Return:
 */
int _strlen(char *s)
{
	 int length = 0;

    while (*s != '\0') 
    {
        length++;
        s++;
    }

    return length;
}
