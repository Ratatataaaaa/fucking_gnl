/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 05:07:55 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 04:06:36 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*temp;
	size_t		iter;

	iter = 0;
	if (!s)
		return (NULL);
	if (!(temp = (char *)malloc(len + 1)))
		return (NULL);
	while (iter < len)
	{
		temp[iter] = s[start];
		iter++;
		start++;
	}
	temp[iter] = '\0';
	return (temp);
}
