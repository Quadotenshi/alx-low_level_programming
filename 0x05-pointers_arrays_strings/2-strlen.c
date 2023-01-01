/**
 * _strlen - returns length of the string
 * @s: string to be passed in
 *
 * Return: returns the length
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
