/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:56:00 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/23 21:01:47 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int cnt;

	cnt = -1;
	while (str[++cnt] != '\0')
	{
	}
	return (cnt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	idx;
	int	fill;

	idx = -1;
	fill = 0;
	while (++idx < size - 1)
	{
		if (src[idx] == '\0')
			fill = 1;
		if (fill)
			dest[idx] = '\0';
		else
			dest[idx] = src[idx];
	}
	dest[size - 1] = '\0';
	return (ft_strlen(src));
}
