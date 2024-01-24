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
{ // line 12 <- current line in the debugger
    char myChar = 'C'; // Replace 'C' with your desired character
    int result;

    if (isupper(myChar))
    {
        result = 1; // myChar is upper
    }
    else
    {
        result = 0; // myChar is lower
    }

    return result;
}

