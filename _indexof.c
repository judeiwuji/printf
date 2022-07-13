#include "main.h"

/**
 * _indexof - Checks if a string has a character
 * @str: the string
 * @c: the character
 *
 * Return: (int)
 */
int _indexof(char *str, char c)
{
    int i, index = -1;

    if (str != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == c)
            {
                index = i;
                break;
            }
        }
    }
    return (index);
}
