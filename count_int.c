#include "main.h"

/**
 * count_int - counts the number of digits in a number
 * @n: the number to be counted
 *
 * Return: (int)
 */
int count_int(int n)
{
	int places = compute_places(n, 10);
	int count;

	if (places == 0)
		return (1);

	for (count = 0; places >= 1; count++)
		places /= 10;

	return (count);
}
