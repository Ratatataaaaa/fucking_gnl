/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:19:22 by cwing             #+#    #+#             */
/*   Updated: 2019/10/19 02:21:11 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	scpy = (char*)(unsigned long)s;
	while (*scpy)
		++scpy;
	while (scpy != s && *scpy != c)
		--scpy;
	if (*scpy == c)
		return (scpy);
	return (NULL);
}
