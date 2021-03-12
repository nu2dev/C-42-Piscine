/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:43:28 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/08 19:35:16 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	const unsigned char *d = (unsigned char*)dest;

	if (*dest == '\0')
		return (src);
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return ((char *)d);
}
