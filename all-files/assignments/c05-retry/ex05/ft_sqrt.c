/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:35:09 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/11 14:46:59 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		limit;
	int		sqrt;
	int		square;

	limit = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	if (nb > 1)
	{
		while (limit * limit > 0)
			limit++;
		sqrt = 0;
		while (sqrt <= (nb / 2) && sqrt < limit)
		{
			square = sqrt * sqrt;
			if (square == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
