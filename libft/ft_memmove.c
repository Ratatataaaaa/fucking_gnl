/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 05:36:53 by cwing             #+#    #+#             */
/*   Updated: 2019/09/16 04:23:41 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_dst;
	unsigned char		*temp_src;

	temp_src = (unsigned char*)src;
	temp_dst = (unsigned char*)dst;
	if (dst == src)
		return (dst);
	if (len == 0)
		return (temp_dst);
	if (temp_dst < temp_src)
		ft_memcpy(temp_dst, temp_src, len);
	else
		while (len--)
			temp_dst[len] = temp_src[len];
	return (temp_dst);
}
