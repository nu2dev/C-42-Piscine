/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:47:20 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/06 13:47:31 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int index;

	index = 3;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while ((index * index) <= nb)
	{
		if ((nb % index) == 0)
			return (0);
		index++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int index;

	if (nb < 2)
		return (2);
	if (nb > 6700417)
		return (2147483647);
	index = nb;
	while (index < 2 * nb)
	{
		if (ft_is_prime(index))
			return (index);
		index++;
	}
	return (0);
}
