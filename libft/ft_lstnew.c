/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:03:01 by cwing             #+#    #+#             */
/*   Updated: 2019/09/16 03:11:20 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*temp;

	temp = ft_memalloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	if (!content)
	{
		temp->content = NULL;
		temp->content_size = (size_t)NULL;
		temp->next = NULL;
		return (temp);
	}
	else
	{
		if (!(temp->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
		temp->next = NULL;
		return (temp);
	}
}
