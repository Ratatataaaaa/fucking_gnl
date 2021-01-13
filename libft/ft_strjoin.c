/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:02:50 by cwing             #+#    #+#             */
/*   Updated: 2019/10/29 20:25:54 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	char		*temp;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	temp = (char*)malloc(len_s1 + len_s2 + 1);
	if (temp)
	{
		ft_strcpy(temp, s1);
		ft_strcpy(temp + len_s1, s2);
		temp[len_s1 + len_s2] = '\0';
		return (temp);
	}
	else
		return (temp);
}
