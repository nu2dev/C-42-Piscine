/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:51:16 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/23 18:58:30 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;
	int				fill;

	idx = 0;
	fill = 0;
	while (idx < n)
	{
		if (src[idx] == '\0')
			fill = 1;
		if (fill)
			dest[idx] = '\0';
		else
			dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}
