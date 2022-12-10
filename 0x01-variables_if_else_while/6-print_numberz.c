#include <stdio.h>
/**
 * main - writing numbers with putchar
 * Return: to return integer with putchar
 */
int main(void)
{
	int x;

	x = 0;
	while (x <= 10)
	{
		putchar("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
