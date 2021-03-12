/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:02:52 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 14:57:59 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int index;
	int num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	index = 1;
	num = nb;
	while (index < power)
	{
		num = num * nb;
		index++;
	}
	return (num);
}
