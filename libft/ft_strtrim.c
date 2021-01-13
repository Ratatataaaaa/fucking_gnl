/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:55:07 by cwing             #+#    #+#             */
/*   Updated: 2019/09/13 07:20:53 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*end;
	char	*start;
	char	*str_new;

	if (!s)
		return (NULL);
	start = (char*)s;
	end = start + ft_strlen(start);
	while ((*start == ' ' || *start == '\t' || *start == '\n')
			&& (*start != '\0'))
		start++;
	if (start == end)
		return (ft_strnew(0));
	--end;
	while (*end == ' ' || *end == '\t' || *end == '\n')
		end--;
	if (!(str_new = ft_strnew(end - start + 1)))
		return (NULL);
	return (ft_strncpy(str_new, start, end - start + 1));
}
