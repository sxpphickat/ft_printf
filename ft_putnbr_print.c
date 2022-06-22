/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:02 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 08:37:27 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_print(int n)
{
	char		c;
	static int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
		len++;
	}
	if (n >= 10)
	{
		ft_putnbr_print(n / 10);
		n = n % 10;
	}
	c = n + 48;
	write (1, &c, 1);
	len++;
	return (len);
}
