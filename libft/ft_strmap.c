/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 02:05:06 by cwing             #+#    #+#             */
/*   Updated: 2019/09/08 04:24:42 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		iter;
	size_t		len_s;
	char		*temp;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	if (!(temp = (char *)malloc(len_s + 1)))
		return (NULL);
	iter = 0;
	while (s[iter])
	{
		temp[iter] = f(s[iter]);
		iter++;
	}
	temp[iter] = '\0';
	return (temp);
}
