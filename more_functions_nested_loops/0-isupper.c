#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _isupper(int c);

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    char myChar = 'C';

    if (isupper(myChar))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
