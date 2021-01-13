/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 02:53:10 by cwing             #+#    #+#             */
/*   Updated: 2019/09/11 03:03:15 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*to_del;
	t_list		*next;

	to_del = *alst;
	while (to_del)
	{
		next = to_del->next;
		del(to_del->content, to_del->content_size);
		free(to_del);
		to_del = next;
	}
	*alst = NULL;
}
