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
