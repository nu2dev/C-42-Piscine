/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:33:10 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/04 18:33:56 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const char			*org_src = src;
	const unsigned int	org_size = size;

	if (size != 0)
	{
		while (--size != 0)
		{
			if ((*dest++ = *src++) == '\0')
				break ;
		}
	}
	if (size == 0)
	{
		if (org_size != 0)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - org_src - 1);
}
