/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:24:28 by cwing             #+#    #+#             */
/*   Updated: 2019/09/13 08:02:17 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		size_s1;
	size_t		iter;

	size_s1 = ft_strlen(s1);
	iter = 0;
	while (iter < n && s2[iter] != '\0')
	{
		s1[size_s1] = s2[iter];
		size_s1++;
		iter++;
	}
	s1[size_s1] = '\0';
	return (s1);
}
