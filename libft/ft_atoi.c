/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:06:20 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 01:45:41 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			digits(char *str)
{
	int			num;

	num = 0;
	while (ft_isdigit(*str) && *str != '\0')
	{
		num = ((num * 10) + (*str - '0'));
		str++;
	}
	return (num);
}

int					ft_atoi(const char *str)
{
	int			iter;

	iter = 0;
	while (ft_isspaces(str[iter]))
		iter++;
	if (str[iter] == '-')
	{
		iter++;
		return ((-1) * digits((char*)str + iter));
	}
	else if (str[iter] == '+')
	{
		iter++;
		return (digits((char*)str + iter));
	}
	else if (ft_isdigit(str[iter]))
		return (digits((char*)str + iter));
	else
		return (0);
}
