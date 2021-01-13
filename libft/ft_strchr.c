/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:00:26 by cwing             #+#    #+#             */
/*   Updated: 2019/09/14 05:31:34 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*temp;
	size_t			iter;
	size_t			size_s;

	temp = s;
	iter = 0;
	size_s = ft_strlen(s) + 1;
	while (iter < size_s)
	{
		if (temp[iter] == (char)c)
			return ((char*)(temp + iter));
		else
			iter++;
	}
	return (NULL);
}
