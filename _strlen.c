/**
 * _strlen - returns the length of a string.
 * @s: The string to compute the length
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
