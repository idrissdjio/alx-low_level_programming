/**
 * flip_bits - compute number of bits to flip to get to target number
 * @n: number to flip
 * @m: target number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = sizeof(long int) * 8;
	unsigned long int bit = 1;
	unsigned int count = 0;

	for (bit = bit << (bits - 1); bit; bit = bit >> 1)
	{
		if (bit & flip)
			count++;
	}
	return (count);
}
