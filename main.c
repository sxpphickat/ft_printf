/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:12:54 by vipereir          #+#    #+#             */
/*   Updated: 2022/06/28 11:04:44 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*aa = "afdsf";

	printf("----------------------teste-s----------------------\n");
	ft_printf(" len: %i\n", ft_printf("1asdfasdfadsfasdfasdfasdf"));
	printf(" len: %i\n", printf("1asdfasdfadsfasdfasdfasdf"));
	printf("----------------------teste-c----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %c %c %c", 48, 'a', '0'));
	printf(" len: %i\n", printf(" %c %c %c", 48, 'a', '0'));
	printf("----------------------teste-s----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %s %s %s ", "c", "asdf", "max"));
	printf(" len: %i\n", printf(" %s %s %s ", "c", "asdf", "max"));
	printf("----------------------teste-i----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %i %i %i ", 0, INT_MAX, INT_MIN));
	printf(" len: %i\n", printf(" %i %i %i ", 0, INT_MAX, INT_MIN));
	ft_printf(" len: %i\n", ft_printf(" %d %d %d ", 0, INT_MAX, INT_MIN));
	printf(" len: %i\n", printf(" %d %d %d ", 0, INT_MAX, INT_MIN));
	printf("----------------------teste-u----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %u %u %u ", 0, UINT_MAX, INT_MIN));
	printf(" len: %i\n", printf(" %u %u %u ", 0, UINT_MAX, INT_MIN));
	printf("----------------------teste-x----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %x %x %x ", 123, 345345, -12333));
	printf(" len: %i\n", printf(" %x %x %x ", 123, 345345, -12333));
	printf("----------------------teste-X----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %X %X %X ", 123, 345345, -12333));
	printf(" len: %i\n", printf(" %X %X %X ", 123, 345345, -12333));
	printf("----------------------teste-p----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %p %p %p ", aa, aa, aa));
	printf(" len: %i\n", printf(" %p %p %p ", aa, aa, aa));
	printf("----------------------teste-%%----------------------\n");
	ft_printf(" len: %i\n", ft_printf(" %r %% %% "));
	printf(" len: %i\n", printf(" %r %% %% "));
	free(aa);
	return (0);
}
