/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:29:40 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 05:06:22 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_equal(char *point, char *to_find)
{
	while (*to_find)
	{
		if (*point != *to_find)
			return (0);
		++point;
		++to_find;
	}
	return (1);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	char		*point;

	if (needle[0] == '\0')
		return ((char*)(haystack));
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			point = (char*)haystack;
			if (check_equal(point, (char*)needle))
				return (point);
		}
		++haystack;
	}
	return (NULL);
}
