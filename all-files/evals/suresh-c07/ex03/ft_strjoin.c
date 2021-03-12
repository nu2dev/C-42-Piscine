/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:22:22 by schetty           #+#    #+#             */
/*   Updated: 2021/03/04 22:22:22 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = -1;
	while (src[++i])
	{
		*dest++ = src[i];
	}
	return (dest);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

int			get_len(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	int		sep_len;

	sep_len = ft_strlen(sep);
	i = -1;
	strs_len = 0;
	while (++i < size && strs[i])
	{
		strs_len += ft_strlen(strs[i] + sep_len);
	}
	return (strs_len);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	char	*str;

	if (size > 0)
	{
		strs_len = get_len(size, strs, sep);
		str = (char*)malloc(sizeof(*str) * (strs_len + 1));
		if (str == NULL)
			return (0);
		i = -1;
		while (++i < size)
		{
			if (strs[i])
			{
				if (i < size - 1)
					str = ft_strcat(ft_strcat(str, strs[i]), sep);
				else
					str = ft_strcat(ft_strcat(str, strs[i]), '\0');
			}
		}
		return (str);
	}
	return (char*)malloc(1);
}
