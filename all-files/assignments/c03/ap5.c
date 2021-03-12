/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:58:32 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/08 19:00:06 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{





	return (len);
}

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
