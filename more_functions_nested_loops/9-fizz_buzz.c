#include <stdio.h>
/**
 * main -
 *
 * Return:
 */
int main(void)
{
	int i;
	for (i = 0; i <=100; i++)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
		{ 
			printf("FizzBuzz");
		}
				else if ((i % 3) == 0)
			{
				printf("Fizz");
			}
			
				else if ((i % 5) == 0)
				{
					printf("Buzz");
				}
		return (0);
		}

