#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - thats all numbers passed in as arg
 * @argc: counts args
 * @argv: array of args
 *
 * Return: 1 on error
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
