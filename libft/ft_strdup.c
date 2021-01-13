/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 01:03:35 by cwing             #+#    #+#             */
/*   Updated: 2019/09/13 07:53:53 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		iter;
	char	*s2;

	iter = 0;
	if (!(s2 = malloc(sizeof(char) * (1 + ft_strlen(s1)))))
		return (NULL);
	while (s1[iter])
	{
		s2[iter] = s1[iter];
		iter++;
	}
	s2[iter] = '\0';
	return (s2);
}
