/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 19:56:56 by cwing             #+#    #+#             */
/*   Updated: 2019/10/29 22:26:52 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_sis		*ft_lsti(t_sis *list, const int fd)
{
	t_sis			*head;
	t_sis			*prev;

	head = list;
	prev = NULL;
	while (list && list->fd != fd)
	{
		prev = list;
		list = list->next;
	}
	if (!list)
	{
		if (!(list = ft_memalloc(sizeof(t_sis))))
			return (NULL);
		list->fd = fd;
	}
	if (prev)
		prev->next = list->next;
	if (list != head)
		list->next = head;
	return (list);
}

static char			*ft_str_char_join(const char *s1, const char *s2, char c)
{
	char			*temp;
	size_t			len;

	temp = NULL;
	len = ft_strlen(s1);
	len += ft_strclen(s2, ENDL);
	if (!(temp = ft_strnew(len)))
		return (NULL);
	temp = ft_strcpy(temp, s1);
	temp = ft_strccat(temp, s2, c);
	return (temp);
}

static int			ft_buff(t_sis *list, char *buff, char **line)
{
	char			*temp;

	temp = ft_strdup(*line);
	ft_strdel(line);
	if (ft_strrchr(buff, ENDL))
	{
		*line = ft_str_char_join(temp, buff, ENDL);
		list->save = ft_strsub(buff, (unsigned int)ft_strclen(buff, ENDL) + 1,
								ft_strlen(buff) - ft_strclen(buff, ENDL));
		ft_strdel(&buff);
		ft_strdel(&temp);
		return (1);
	}
	*line = ft_strjoin(temp, buff);
	ft_strclr(buff);
	ft_strdel(&temp);
	return (0);
}

static int			ft_dell_gnl(t_sis *list, char **line, char *buf)
{
	ft_strdel(&buf);
	if (**line)
		return (1);
	list->fd = 0;
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static t_sis	*list = NULL;
	char			*buff;
	long			i;

	i = 0;
	if (!line || BUFF_SIZE < 1 || fd < 0 || read(fd, 0, 0)
		|| !(*line = ft_strnew(0))
		|| !(list = ft_lsti(list, fd)))
		return (-1);
	if (list->save && ft_buff(list, list->save, line))
		return (1);
	ft_strdel(&list->save);
	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((i = read(fd, buff, BUFF_SIZE)))
	{
		buff[i] = '\0';
		if (ft_buff(list, buff, line))
			return (1);
		if (i < BUFF_SIZE)
			break ;
	}
	if (ft_dell_gnl(list, line, buff))
		return (1);
	return (0);
}
