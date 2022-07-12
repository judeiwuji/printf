/**
 * compute_places - Computes number of time n will be divided to
 * get the first value
 * @n: the number
 * @step: The step to be used to get the value
 * Return: (int)
 */
unsigned int compute_places(unsigned int n, int step)
{
	if (n < 10)
		return (0);

	if (n / step < 10)
		return (step);

	return (compute_places(n, step * 10));
}
