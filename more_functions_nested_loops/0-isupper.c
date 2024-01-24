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

    if (isupper(myChar))
    {
        return 1; // c is upper
    }
    else
    {
        return 0; // c is lower
    }
}

