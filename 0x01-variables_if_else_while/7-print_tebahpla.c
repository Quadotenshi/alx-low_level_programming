#include <stdio.h>
/**
 * main - writing in reverse alphabet
 * Return: still returning void
 */
int main(void)
{
	int x;
	
	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
