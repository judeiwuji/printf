#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *encoded;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	encoded = malloc(sizeof(char) * _strlen(str) + 1);
	if (encoded != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			j = 0;
			encoded[i] = str[i];
			while (letters[j] != '\0')
			{
				if (str[i] == letters[j])
				{
					encoded[i] = rot13[j];
					break;
				}
				j++;
			}
			i++;
		}
		encoded[i] = '\0';
	}
	return (encoded);
}
