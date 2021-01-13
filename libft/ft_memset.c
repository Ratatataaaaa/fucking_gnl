/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:21:39 by cwing             #+#    #+#             */
/*   Updated: 2019/09/06 23:42:11 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*temp;
	char			simbol;

	temp = ptr;
	simbol = value;
	while (size)
	{
		temp[size - 1] = simbol;
		size--;
	}
	return (temp);
}
