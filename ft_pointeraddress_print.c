/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeraddress_print.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:32 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 15:57:20 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointeraddress_print(unsigned long nb)
{
	static int		len_p;
	unsigned long	a;
	char			*x;

	len_p = 0;
	x = "0123456789abcdef";
	a = 0;
	if (nb > 0)
	{
		a = nb % 16;
		if (nb / 16 > 0)
			ft_pointeraddress_print(nb / 16);
	}
	write(1, &x[a], 1);
	len_p++;
	return (len_p);
}
