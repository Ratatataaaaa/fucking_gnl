/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 04:22:16 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 04:57:31 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_lstsize(t_list *head)
{
	size_t			size;

	if (!head)
		return (0);
	size = 0;
	while (head)
	{
		size++;
		head = head->next;
	}
	return (size);
}
