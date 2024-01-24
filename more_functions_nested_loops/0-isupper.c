#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isupper(int c);

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{ 
    char myChar = 'C'; 
    int result;

    if (isupper(myChar))
    {
        result = 1; 
    }
    else
    {
        result = 0; 
    }

    return result;
}

