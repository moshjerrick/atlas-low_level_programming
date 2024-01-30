#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - string copy
 *
 * @*dest: pointer to destination
 * @*src: pointer to source
 */ 
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}
