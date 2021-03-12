/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 02:17:49 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/12 02:17:55 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
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

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	if (!(dup = malloc(ft_strlen(src) + 1)))
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
