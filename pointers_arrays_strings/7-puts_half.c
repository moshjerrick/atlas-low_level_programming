#include "main.h"
/**
 * puts_char - printing half strings
 *
 * @str: pointer
 * Return: zero
 */ 
int main(void)
{
    char *str = "abcdefgh";
    puts_half(str);
}

void puts_half(char *str)
{
    int end = strlen(str);
    int start;
    int i;
    
    if(end % 2 == 1) //odd
    {
        start = (strlen(str) + 1) / 2;
    }
    else //even
    {
        start = strlen(str) / 2;
    }
    
    for(i = start; i < end; i++)
    {
        putchar(str[i]);
    }
}
