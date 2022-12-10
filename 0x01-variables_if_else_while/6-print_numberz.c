#include <stdio.h>
/**
 * main - writing numbers with putchar
 * Return: to return integer with putchar
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
