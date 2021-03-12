/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:05:43 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/09 21:20:28 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dlen;
	int slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen])
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
