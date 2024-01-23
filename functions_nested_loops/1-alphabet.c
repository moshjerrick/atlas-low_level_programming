#include <stdio.h>

void print_alpha();
void _putchar(char);

/** print_alpha - prints alphabet
* Return: null
*/
void print_alpha()
{
int i;
for(i = 97; i < 122; i++)
putchar(i);

/*putchar('\n'); */ /* uncomment to get newline */
/* NOTE: no return needed for void functions! */
}

/** main - runs program with function
* Return: always zero
*/
int main(void)
{
print_alpha();
return(0);
}
