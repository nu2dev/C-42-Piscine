/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:22:59 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/04 11:56:08 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				checknull;

	i = -1;
	checknull = 0;
	if (!src)
		return (dest);
	while (++i < n)
	{
		if (src[i] == '\0')
			checknull = 1;
		if (checknull)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
