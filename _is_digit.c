/**
 * _is_digit - Checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: (int)
 */
int _is_digit(char c)
{
	int res = (c >= 48 && c <= 57);

	return (res);
}
