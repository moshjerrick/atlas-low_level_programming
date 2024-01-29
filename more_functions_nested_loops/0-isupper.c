#include "main.h"
/**
 * main - Entry point of the program.
 *
 * @c: is upper case
 * Return: Always 0 (success).
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
