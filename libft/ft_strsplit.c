/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 01:12:30 by cwing             #+#    #+#             */
/*   Updated: 2019/09/15 08:19:16 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_words(char *s, char c)
{
	int			count;
	int			iter;

	count = 0;
	iter = 0;
	if (!s)
		return (0);
	while (s[iter])
	{
		if (s[iter] == c)
			iter++;
		else
		{
			count++;
			while (s[iter] != c && s[iter] != '\0')
				iter++;
		}
	}
	return (count + 1);
}

static char			*f_temp_word(char *s, char c)
{
	int			size_word;

	size_word = 0;
	while (*s != c && *s != '\0')
	{
		size_word++;
		s++;
	}
	return (ft_memalloc(size_word + 1));
}

static int			word_siz(char *s, char c)
{
	int			size_word;

	size_word = 0;
	while (*s != c && *s != '\0')
	{
		size_word++;
		s++;
	}
	return (size_word);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**temp;
	char		*temp_s;
	char		*temp_word;
	int			iter;

	if (!s || !c)
		return (NULL);
	if (!(temp = (char**)malloc(sizeof(char*) * count_words((char*)s, c))))
		return (NULL);
	temp_s = (char*)s;
	iter = 0;
	while (*temp_s)
	{
		if (*temp_s == c)
			temp_s++;
		else
		{
			temp_word = f_temp_word(temp_s, c);
			temp[iter] = ft_strncpy(temp_word, temp_s, word_siz(temp_s, c));
			iter++;
			temp_s += word_siz(temp_s, c);
		}
	}
	temp[iter] = NULL;
	return (temp);
}
