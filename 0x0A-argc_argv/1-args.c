#include <stdio.h>
/**
 * main - prints number of arguments to screen
 * @argc: number of arguments
 * @argv: array of arguments passed in
 *
 * Return: returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
