/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:22:05 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/05 18:57:51 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;
	unsigned int index;
	unsigned int ret;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	ret = srclen;
	if (size <= destlen)
		ret += size;
	else
		ret += destlen;
	index = 0;
	while (src[index] && index + 1 < size)
	{
		dest[destlen] = src[index];
		destlen++;
		index++;
	}
	return (ret);
}
