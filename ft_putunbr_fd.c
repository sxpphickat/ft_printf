/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:09:33 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/20 16:12:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char	c;

	if (n >= 10)
	{
		ft_putunbr_fd(n / 10, fd);
		n = n % 10;
	}
	c = n + 48;
	write (fd, &c, 1);
}
