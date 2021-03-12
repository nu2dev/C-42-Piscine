/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:45:33 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/06 14:41:22 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	nbr;

	nbr = (unsigned)nb;
	if (nb <= 0)
		return (0);
	if (nbr == 1)
		return (nb);
	if (nbr > 1)
	{
		sqrt = 0;
		while (sqrt <= nbr / 2)
		{
			if (sqrt * sqrt == nbr)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
