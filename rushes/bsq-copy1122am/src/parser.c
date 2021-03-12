/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:58:36 by gbeh              #+#    #+#             */
/*   Updated: 2021/03/09 02:32:01 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

char	*resize_arr(char *s, unsigned int size)
{
	char	*new;
	int		idx;

	new = (char *)malloc(sizeof(*new) * (size + 1));
	idx = 0;
	while (s[idx] != '\0')
	{
		new[idx] = s[idx];
		idx++;
	}
	free(s);
	new[idx] = '\0';
	return (new);
}

int		slen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int		ft_atoi(char **line)
{
	int res;

	res = 0;
	while (**line >= '0' && **line <= '9')
	{
		res *= 10;
		res += **line - '0';
		(*line)++;
	}
	return (res);
}

/*
** Other parsing functions here
*/
