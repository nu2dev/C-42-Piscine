/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:43:28 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/10 00:07:39 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dlen;
	unsigned int slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen] && nb > 0)
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
		nb--;
	}
	dest[dlen] = '\0';
	return (dest);
}
