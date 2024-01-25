#include "main.h"
#include <stdio.h>
/**
 *
 * main - 
 *
 * Return:
 */
void more_numbers(void)

{
int i,j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
{	
	putchar ('0' + j);

}
}
putchar('\n');
}

int main(void) 

{
	more_numbers();

	return (0);
}
