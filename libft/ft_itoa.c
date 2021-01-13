/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 08:01:03 by cwing             #+#    #+#             */
/*   Updated: 2019/09/11 09:05:03 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	places(int num)
{
	size_t		places;

	if (num == -2147483648)
		return (10);
	places = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		places++;
	}
	while (num)
	{
		num /= 10;
		places++;
	}
	return (places);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = places(n) + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[size - 1] = '\0';
	while (n)
	{
		size--;
		str[size - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
