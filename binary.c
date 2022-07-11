#include <stdio.h>
#include "main.h"

#define STR_TO_INT(val) (val - 48)
#define INT_TO_STR(val) (val + 48)
#define PLA(val) ()

float _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}

int HTU(int n)
{
	int i;
	for (i = 0; n > 0; i++)
		n /= 10;
	return (i);
}

void main(void)
{
	float value;
	int result, m=554, i;

	for (i = 1, result = 0; m > 0; m /= 2, i++)
	{
		if (m == 1)
		{
			value = _pow_recursion(10,i);
			result += 1 * value;
			break;
		}
		result += (m % 2) * _pow_recursion(10, i);
	}
	printf("%d", result/10);
}