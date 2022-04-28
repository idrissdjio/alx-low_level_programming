/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of bit to change
 * Return: Success(1) or Error(-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(long int) * 8, bit = 1;

	if (index >= bits)
		return (-1);
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
