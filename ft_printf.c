#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	params;
	int	len;

	va_start(params, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			write(1, s, 1);
			s++;
		}
	}
	va_end(params);
	return (len);
}

int	main(void)
{
	ft_printf("asdf\n", "asdf");
}
