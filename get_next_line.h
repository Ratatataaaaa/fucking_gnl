/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:37:59 by cwing             #+#    #+#             */
/*   Updated: 2019/10/29 22:05:52 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define ENDL '\n'
# include "libft/libft.h"
# include <fcntl.h>

typedef struct			s_sis
{
	struct s_sis		*next;
	int					fd;
	char				*save;
}						t_sis;

int						get_next_line(const int fd, char **line);
#endif
