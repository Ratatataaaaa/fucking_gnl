/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 01:11:32 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 03:30:03 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		print_int(int nb, int fd)
{
	int		val;

	if (nb > 0)
	{
		val = nb % 10;
		nb -= val;
		nb /= 10;
		print_int(nb, fd);
		ft_putchar_fd(val + '0', fd);
	}
	else
	{
		return ;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if (fd < 1)
		return ;
	if (n == -2147483648)
	{
		ft_putnbr_fd(-2, fd);
		n = 147483648;
		print_int(n, fd);
		return ;
	}
	if (n < 0 && n != 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		print_int(n, fd);
		return ;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n > 0)
	{
		print_int(n, fd);
		return ;
	}
}
