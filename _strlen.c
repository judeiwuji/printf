/**
 * _strlen - returns the length of a string.
 * @s: The string to compute the length
 *
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(++s));
}
