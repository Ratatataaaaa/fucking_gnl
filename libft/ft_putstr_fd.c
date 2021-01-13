/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:21:46 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 04:10:40 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t		iter;

	if (!s || fd < 1)
		return ;
	iter = 0;
	while (s[iter])
	{
		ft_putchar_fd(s[iter], fd);
		iter++;
	}
}
