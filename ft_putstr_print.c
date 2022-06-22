#include "ft_printf.h"

int		ft_putstr_print(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (len);
	while (*s)
	{
		write(1, s++, 1);
		len++;
	}
	return (len);
}
