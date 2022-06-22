/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:38 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 15:56:46 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_print(char xx, unsigned int nb)
{
	static int		len_h;
	unsigned int	a;
	char			*xy;
	char			*x;

	len_h = 0;
	x = "0123456789abcdef";
	xy = "0123456789ABCDEF";
	a = 0;
	if (nb > 0)
	{
		a = nb % 16;
		if (nb / 16 > 0)
			ft_hex_print(xx, nb / 16);
	}
	if (xx == 'x')
		write(1, &x[a], 1);
	if (xx == 'X')
		write(1, &xy[a], 1);
	len_h++;
	return (len_h);
}
