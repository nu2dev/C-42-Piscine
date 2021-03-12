/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:26:24 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/08 08:50:15 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strncmp(char *s1, char *s2, unsigned int n)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;
	unsigned char 		c1;
	unsigned char		c2;

	c1 = *(unsigned char*)p1;
	c2 = *(unsigned char*)p2;
	if (n == 0)
		return (0);
	while ((*p1 == *p2) && n > 0)
	{
		if (p1 == '\0')
			return (c1 - c2);
		c1 = *(unsigned char*)p1++;
		c2 = *(unsigned char*)p2++;
		n--;
	}
	return (c1 - c2);
}
