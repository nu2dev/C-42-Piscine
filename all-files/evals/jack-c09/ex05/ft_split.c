/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyeo <zyeo@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:26:44 by zyeo              #+#    #+#             */
/*   Updated: 2021/03/11 14:56:09 by zyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	convert(char *word, int from, int to, char *str)
{
	int m;

	m = 0;
	while (from < to)
	{
		word[m] = str[from];
		m++;
		from++;
	}
	word[m] = 0;
}

int		check(char c, char *charset)
{
	int a;

	a = 0;
	while (charset[a])
	{
		if (c == charset[a])
			return (1);
		a++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int n;
	int cword;
	int cap;

	n = 0;
	cword = 0;
	cap = 0;
	while (str[n])
	{
		if (check(str[n], charset))
		{
			cap = 0;
		}
		else
		{
			if (cap == 0)
			{
				cap++;
				cword++;
			}
		}
		n++;
	}
	return (cword);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**temp;

	i = 0;
	k = 0;
	temp = (char **)malloc(sizeof(char *) * count_word(str, charset) + 1);
	while (str[i])
	{
		if (!check(str[i], charset))
		{
			j = i;
			while (str[i] && !check(str[i], charset))
				i++;
			temp[k] = (char *)malloc(i - j + 1);
			convert(temp[k], j, i, str);
			k++;
		}
		i++;
	}
	temp[k] = 0;
	return (temp);
}
