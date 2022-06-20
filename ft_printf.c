/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:24:18 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/20 16:24:54 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_print_params(char c, va_list params);

int	ft_printf(const char *s, ...)
{
	va_list		params;
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_start(params, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_print_params(*s, params);
			s++;
		}
		write (1, s, 1);
		len++;
		s++;
	}
	va_end(params);
	return (len);
}

int	ft_print_params(char c, va_list params)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(params, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(params, char *), 1);
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(params, int), 1);
	if (c == 'u')
		ft_putunbr_fd(va_arg(params, unsigned int), 1);
	return (0);
}

int	main (void)
{
	ft_printf("strlen: %i\n", ft_printf("AAAa %u AAAa\n", 4294967295));
	printf("%X\n", 12);
}
