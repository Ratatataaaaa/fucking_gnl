/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:50:02 by cwing             #+#    #+#             */
/*   Updated: 2019/09/14 06:12:44 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_equal(char *point, char *to_find, int size)
{
	int		iter;

	iter = 0;
	while (to_find[iter])
	{
		if ((point[iter] != to_find[iter]) || size == 0)
			return (0);
		iter++;
		size--;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*point;
	size_t		iter;

	iter = 0;
	if (needle[iter] == '\0')
		return ((char*)(haystack));
	while (haystack[iter] && (iter < len))
	{
		if (haystack[iter] == needle[0])
		{
			point = (char*)haystack + iter;
			if (check_equal(point, (char*)needle, len - iter))
				return (point);
		}
		++iter;
	}
	return (NULL);
}
