#include "main.h"
#include <stdio.h>
#include <string.h>
int main (void)
{
    char s1[98];
    char *ptr;
    
    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

char *_strcpy(char *dest, char *src)
{
   _stpcopy(dest, src);
   return dest;
}
           
char *_stpcopy(char *dest, char *src)
{
   char  *p;

   p = mempcpy(dest, src, strlen(src));
   *p = '\0';

   return p;
}
