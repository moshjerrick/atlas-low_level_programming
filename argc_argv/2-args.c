#include <stdio.h>
/**
 *function main - printing all arguements on new lines
 *
 *@argc: number of args
 *@argv: string
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
