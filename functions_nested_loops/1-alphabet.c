#include <stdio.h>
#include "main.h"
void print_alpha();

/**
* main - program
* Return: nothing
*/
int main(void)
{
print_alpha();
return (0);
}

/** print_alpha - prints alphabet
* Return: null
*/
void print_alpha()
{
int i;
for(i = 97; i <= 122; i++)
putchar(i);

putchar('\n'); 
}}
