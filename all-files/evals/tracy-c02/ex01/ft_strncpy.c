/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tong <tong@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:24:15 by tong              #+#    #+#             */
/*   Updated: 2021/03/06 12:32:04 by tong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	j = n;
	i = 0;
	if (!*dest || n == 0)
		return (0);
	while (i < j && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
