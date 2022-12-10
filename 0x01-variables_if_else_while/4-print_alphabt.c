#include <stdio.h>
/**
 * main - ignoring some alphabets
 * Return: still returning small letters
 */

int main(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
