/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:35:10 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/05 17:42:26 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int destlen;
	unsigned int srclen;

	destlen = 0;
	while (dest[destlen])
		destlen++;
	srclen = 0;
	while (src[srclen] && nb > 0)
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
		nb--;
	}
	dest[destlen] = 0;
	return (dest);
}
