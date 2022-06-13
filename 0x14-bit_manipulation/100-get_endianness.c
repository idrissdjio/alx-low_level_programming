/**
 * get_endianness - detects endian architecture
 * Return: big endian(0), little endian(1)
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	return (0);
}
