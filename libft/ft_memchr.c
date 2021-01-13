/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:54:30 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 02:30:17 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*temp;
	size_t				iter;

	temp = s;
	iter = 0;
	while (iter < n)
	{
		if (temp[iter] == (unsigned char)c)
			return ((void*)(temp + iter));
		else
			iter++;
	}
	return (NULL);
}
