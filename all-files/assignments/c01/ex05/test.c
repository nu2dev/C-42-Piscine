/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 00:32:40 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/03 01:43:07 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(1,(str + i), 1);
			i++;
		}
	}
	return ;
}
