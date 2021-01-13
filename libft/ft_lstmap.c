/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 03:53:32 by cwing             #+#    #+#             */
/*   Updated: 2019/09/16 04:25:42 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list		*head;
	t_list		*newe;

	if (!lst || !f)
		return (NULL);
	head = f(lst);
	newe = head;
	while (lst->next)
	{
		lst = lst->next;
		newe->next = f(lst);
		newe = newe->next;
	}
	return (head);
}
