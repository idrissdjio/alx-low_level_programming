/**
 * get_bit - check the bit at an index
 * @n: number to check bits
 * @index: index to check
 * Return: bit at the index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	return ((bit << index & n) ? 1 : 0);
}
