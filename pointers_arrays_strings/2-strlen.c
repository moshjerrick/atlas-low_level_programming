#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns sting length
 *
 * @s: points to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
