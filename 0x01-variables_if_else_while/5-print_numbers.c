#include <stdio.h>
/**
 * main - to print numbers less than 10
 * Return: return the digits
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
