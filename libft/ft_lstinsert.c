/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 04:31:59 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 05:25:47 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstinsert(t_list **head, t_list *new_elem, size_t index)
{
	t_list		*temp;

	if (!head || !new_elem)
		return ;
	temp = *head;
	if (index >= ft_lstsize(temp))
		return ;
	if (index == 0)
		ft_lstadd(head, new_elem);
	else
	{
		while (--index > 0)
			temp = temp->next;
		temp->next = new_elem;
	}
}
