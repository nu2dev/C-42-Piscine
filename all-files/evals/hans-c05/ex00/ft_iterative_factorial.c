/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:11:18 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 21:58:41 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;
	int index;

	if (nb < 0)
		return (0);
	fac = 1;
	index = 1;
	while (index < nb + 1)
	{
		fac = fac * index;
		index++;
	}
	return (fac);
}
