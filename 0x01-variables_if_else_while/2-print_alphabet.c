#include <stdio.h>

/**
 * main - prints all alphabets
 * Return: prints alphabet to screen
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	return (0);
}
