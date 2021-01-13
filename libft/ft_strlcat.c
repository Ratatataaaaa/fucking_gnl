/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:52:58 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 07:55:25 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;

	if (size < ft_strlen((const char *)dst))
		dst_l = size;
	else
		dst_l = ft_strlen((const char *)dst);
	src_l = ft_strlen(src);
	if (dst_l == size)
		return (size + src_l);
	if (src_l < size - dst_l)
		ft_strncat(dst, src, src_l + 1);
	else
	{
		ft_strncat(dst, src, size - dst_l - 1);
		dst[--size] = '\0';
	}
	return (dst_l + src_l);
}
