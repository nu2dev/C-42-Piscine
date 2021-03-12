/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:28:19 by hloke             #+#    #+#             */
/*   Updated: 2021/03/11 18:26:12 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

char				*ft_strdup(char *s)
{
	char	*dest;
	int		i;

	if (!(dest = (char*)malloc(ft_strlen(s) * sizeof(char) + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	if (!(arr = malloc((ac + 1) * (sizeof(struct s_stock_str)))))
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i += 1;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
