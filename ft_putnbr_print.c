/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:02 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 12:05:03 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_print(long long n)
{
	char		c;
	static int	len;
	unsigned long long un;

	un = 0;
	if (n < 0)
	{
		un = -un;
		write (1, "-", 1);
		len++;
	}
	else
		un = n;
	if (un >= 10)
	{
		ft_putnbr_print(un / 10);
		un = un % 10;
	}
	c = un + 48;
	write (1, &c, 1);
	len++;
	return (len);
}
