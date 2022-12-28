#include <stdio.h>
/**
 * main - Size is not grandeur...prints size of various types
 *Return: 0 as success
 */

int main(void)
{
	char x;
	int y;
	long int z;
	long long int xl;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(xl));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
