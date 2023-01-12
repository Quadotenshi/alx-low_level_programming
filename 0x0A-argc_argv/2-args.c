#include <stdio.h>
/**
 * main - prints all arguments with a new line
 * @argc: argument count
 * @argv: array of passed in arg
 *
 * Return: returns 0
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
