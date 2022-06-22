
#include "ft_printf.h"

int		ft_putunbr_print(unsigned int n)
{
	char	c;
	static int	len;

	len = 0;
	if (n >= 10)
	{
		ft_putunbr_print(n / 10);
		n = n % 10;
	}
	c = n + 48;
	write (1, &c, 1);
	len++;
	return (len);
}
