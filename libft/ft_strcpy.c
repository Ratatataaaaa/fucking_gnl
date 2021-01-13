/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 01:20:59 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 03:11:47 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		iter;

	iter = 0;
	while (src[iter])
	{
		dst[iter] = src[iter];
		iter++;
	}
	dst[iter] = src[iter];
	return (dst);
}
