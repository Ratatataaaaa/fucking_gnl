/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 03:55:50 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 04:15:42 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstpopback(t_list **head)
{
	t_list		*temp_head;

	if (!head)
		return ;
	temp_head = *head;
	if (temp_head->next == NULL)
	{
		free(temp_head->content);
		free(temp_head);
		head = NULL;
		return ;
	}
	while (temp_head->next->next != NULL)
		temp_head = temp_head->next;
	free(temp_head->next->content);
	free(temp_head->next);
	temp_head->next = NULL;
}
