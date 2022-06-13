#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all varialbles
 * @format: contains types of params in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *s, *sep = "";

	if (format)
	{
		va_start(params, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(params, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(params, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(params, double));
					break;
				case 's':
					s = va_arg(params, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(params);
	}
	printf("\n");
}
