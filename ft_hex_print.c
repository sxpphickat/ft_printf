/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:38 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 07:35:41 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_hex_print(char xX, unsigned int	nb)
{
	static int	len;
	unsigned int	a;
	char 		*X;
	char 		*x;

	x = "0123456789abcdef";
	X = "0123456789ABCDEF";
	len = 0;
	if (nb > 0)
	{
		a = nb % 16;
		ft_hex_print(xX, nb /16);
	}
	if (xX == 'x')
		write(1, &x[a], 1);
	if (xX == 'X')
		write(1, &X[a], 1);
	// nao está funcioando, printa um a mais e a conta sai errada;
	len++;
	return (len);
}