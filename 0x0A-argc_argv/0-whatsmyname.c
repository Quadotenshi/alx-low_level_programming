#include <stdio.h>
#include "main.h"
/**
 * main - function to print program name
 * @argc: the count of argument passed in
 * @argv: an array of strings
 *
 * Return: returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
