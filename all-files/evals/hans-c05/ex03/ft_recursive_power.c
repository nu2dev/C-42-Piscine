/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:39:19 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 16:15:49 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int nb, int power, int numbers)
{
	if (power > 0)
	{
		power--;
		numbers *= nb;
		return (ft_recursive(nb, power, numbers));
	}
	return (numbers);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive(nb, power, 1));
}
