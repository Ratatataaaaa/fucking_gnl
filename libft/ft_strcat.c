/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:14:36 by cwing             #+#    #+#             */
/*   Updated: 2019/09/08 04:20:47 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		size_s1;
	size_t		iter;

	size_s1 = ft_strlen(s1);
	iter = 0;
	while (s2[iter])
	{
		s1[size_s1] = s2[iter];
		size_s1++;
		iter++;
	}
	s1[size_s1] = s2[iter];
	return (s1);
}
