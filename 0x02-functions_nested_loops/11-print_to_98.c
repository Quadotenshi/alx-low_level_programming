#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints up to 98
 *@num: my number character as usual
*/

void print_to_98(int num)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d\n", n);
	}
}
