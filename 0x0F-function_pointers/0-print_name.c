/**
 * print_name - prints name
 * @name: name to print
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
