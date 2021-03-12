/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboh-chu <lboh-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:02:11 by lboh-chu          #+#    #+#             */
/*   Updated: 2021/03/11 19:47:17 by kyeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = -1;
	while (src[++j] != '\0')
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

int		c_len(int size, char **strs, char *sep)
{
	int i;
	int l;
	int sep_l;

	i = -1;
	l = 0;
	sep_l = ft_strlen(sep);
	while (++i < size)
	{
		l += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			l += sep_l;
		}
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	char	*tab;

	x = c_len(size, strs, sep);
	if (size == 0)
	{
		tab = (char*)malloc(sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	tab = (char*)malloc(sizeof(char) * (x + 1));
	if (tab == NULL)
		return (NULL);
	tab[0] = '\0';
	i = -1;
	while (++i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
		{
			tab = ft_strcat(tab, sep);
		}
	}
	return (tab);
}
