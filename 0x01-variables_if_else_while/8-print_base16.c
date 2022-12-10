#include <stdio.h>
/**
 * main - to convert numbs to base 16
 * Return: to bring back hexa
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	y = 'a';
	while (y < 'g')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
