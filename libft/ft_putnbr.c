/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:12:20 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 00:15:05 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		print_int(int nb)
{
	int		val;

	if (nb > 0)
	{
		val = nb % 10;
		nb -= val;
		nb /= 10;
		print_int(nb);
		ft_putchar(val + '0');
	}
	else
	{
		return ;
	}
}

void			ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(-2);
		n = 147483648;
		print_int(n);
		return ;
	}
	if (n < 0 && n != 0)
	{
		ft_putchar('-');
		n *= -1;
		print_int(n);
		return ;
	}
	if (n == 0)
		ft_putchar('0');
	if (n > 0)
	{
		print_int(n);
		return ;
	}
}
