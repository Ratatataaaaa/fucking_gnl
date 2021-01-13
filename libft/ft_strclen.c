/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:17:46 by cwing             #+#    #+#             */
/*   Updated: 2019/10/29 22:19:22 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strclen(const char *src, char c)
{
	size_t		len;

	len = 0;
	if (src)
	{
		while (src[len] && src[len] != c)
			++len;
	}
	return (len);
}
