/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 01:35:55 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 06:12:26 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		iter;
	size_t		src_len;

	src_len = ft_strlen(src);
	iter = 0;
	while (iter < len)
	{
		if (iter < src_len)
			dst[iter] = src[iter];
		else
			dst[iter] = '\0';
		iter++;
	}
	return (dst);
}
