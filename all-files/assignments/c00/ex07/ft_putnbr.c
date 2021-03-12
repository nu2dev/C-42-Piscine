/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:59:30 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 22:44:08 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nb_unsigned;
	char			mod_nb;

	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		write(1, "-", 1);
	}
	else
		nb_unsigned = (unsigned int)nb;
	if (nb_unsigned >= 10)
	{
		ft_putnbr(nb_unsigned / 10);
		ft_putnbr(nb_unsigned % 10);
	}
	else
	{
		mod_nb = nb_unsigned + '0';
		write(1, &mod_nb, 1);
	}
}
