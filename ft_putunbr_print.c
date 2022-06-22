/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:34:32 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 07:34:42 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
