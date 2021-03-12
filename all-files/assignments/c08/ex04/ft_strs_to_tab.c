/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 01:00:53 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/12 01:01:50 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	char	*charptr;
	int		itr;

	charptr = str;
	itr = 0;
	while (*charptr != 0)
	{
		itr++;
		charptr++;
	}
	return (itr);
}

char				*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = malloc(ft_strlen(src) + 1)))
		return (dup);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	if (!(strs = malloc(sizeof(struct s_stock_str) * (ac + 2))))
		return (0);
	i = 0;
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs[i].str = NULL;
	return (strs);
}
