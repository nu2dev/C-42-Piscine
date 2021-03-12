/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:35:47 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/10 12:35:53 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*charptr;
	int		itr;

	charptr = str;
	itr = 0;
	while (*charptr != 0)
	{
		itr++;
		charptr++;
	}
	return (itr);
}
