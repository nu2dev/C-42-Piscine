/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:03:23 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/05 17:34:16 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;

	destlen = 0;
	srclen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (*src)
	{
		dest[destlen] = *src;
		destlen++;
		src++;
	}
	dest[destlen] = '\0';
	return (dest);
}
