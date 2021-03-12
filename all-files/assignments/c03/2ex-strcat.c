/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:05:43 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/08 11:23:52 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	const unsigned char *d = (unsigned char*)dest;
//	const unsigned char *s = (unsigned char*)src;

	if (*dest == '\0')
		return(src);
	while(dest != 0)
		dest++;
	--dest;
	while(src != 0)
	{
		*dest++ = *src++;
	}	
	*dest = *src;
	return ((char *)d);
}
