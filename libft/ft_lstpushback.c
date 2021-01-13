/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 04:13:57 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 04:49:44 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **head, t_list *new_elem)
{
	t_list			*temp;

	if (!head || !new_elem)
		return ;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_elem;
}
