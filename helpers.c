/**
 * _is_alpha - Checks if a character is an alphabet
 * @c: The character to be checked
 *
 * Return: (int)
 */
int _is_alpha(char c)
{
	int res = (c >= 65 && c <= 90) || (c >= 97 && c <= 122);

	return (res);
}

/**
 * _is_specifier - Checks if a character is a specifier
 * @c: The character to be checked
 *
 * Return: (int)
 */
int _is_specifier(char c)
{
	char *specifiers = "cs";
	int res = 0, i;

	for (i = 0; specifiers[i] != '\0'; i++)
	{
		if (c == specifiers[i])
		{
			res = 1;
			break;
		}
	}
	return (res);
}
