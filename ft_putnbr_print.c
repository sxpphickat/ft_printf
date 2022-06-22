/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 07:35:02 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/22 16:02:51 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_print(int n)
{
	static int	len_n;
	long int	un;

	len_n = 0;
	un = n;
	if (n < 0)
	{
		un *= -1;
		write (1, "-", 1);
		len_n++;
	}
	if (un >= 10)
	{
		ft_putnbr_print(un / 10);
	}
	un = (un % 10) + 48;
	ft_putchar_print(un);
	len_n++;
	return (len_n);
}

/*
#include <stdio.h>
int	main (void)
{
	int	tamanho;

	tamanho = ft_putnbr_print(0);
	printf("%i\n", tamanho);
	return (0);
}*/
