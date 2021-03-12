/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:22:22 by schetty           #+#    #+#             */
/*   Updated: 2021/03/04 22:22:22 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		not_in_set(char ch, char *set)
{
	while (*set)
	{
		if (ch == *set++)
			return (0);
	}
	return (1);
}

void	ft_strcpy(char *dest, char *src, char *charset)
{
	int		i;

	i = -1;
	while (src[++i] && not_in_set(src[i], charset))
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

void	copy_segment(char *str, char *charset, char **output)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0
	while (str[i])
	{
		if (not_in_set(str[i], charset))
		{
			k = 0;
			while (not_in_set(str[i + k], charset))
				k++;
			output[j] = (char*)malloc(sizeof(char) * (k + 1))
			ft_strcpy(output[i], str + i, charset);
			i += k;
			j++;
		}
		i++;
	}
}

int		count_segments(char *str, char *charset)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (str[i])
	{
		if (not_in_set(str[i + 1], charset))
	}
}

char 	**ft_split(char *str, char *charset)
{
	int		i;
	char	**output;

	i = count_segments(str, charset);
	if (!(output = (char **)malloc(sizeof(*output) * (i + 1))))
		return (NULL);
	else
		output[i] = 0;
	copy_segments(str, charset, output);
	return (output);
}
