/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 02:16:41 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 03:48:44 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*temp;
	size_t		len_s;
	size_t		iter;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	if (!(temp = (char *)malloc(len_s + 1)))
		return (NULL);
	iter = 0;
	while (s[iter])
	{
		temp[iter] = f(iter, s[iter]);
		iter++;
	}
	temp[iter] = '\0';
	return (temp);
}
