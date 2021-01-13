/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 04:01:17 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 04:20:03 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstpopfront(t_list **head)
{
	t_list		*temp_head;

	if (!head)
		return ;
	temp_head = *head;
	if (temp_head->next == NULL)
		ft_lstpopback(head);
	else
	{
		temp_head = *head;
		head = &temp_head->next;
		free(temp_head->content);
		free(temp_head);
	}
}
