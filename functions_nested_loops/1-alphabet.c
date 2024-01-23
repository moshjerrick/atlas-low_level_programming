#include <stdio.h>
#include "main.h"
#include "printalpha.h"

/** print_alpha - prints alphabet
* Return: null
*/
void print_alpha()
{
int i;
for(i = 97; i < 122; i++)
_putchar(i);

_putchar('\n'); 
}

/**
* main - program
* Return: nothing
*/
int main(void)
{
print_alpha();
return (0);
}
