/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kloh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 04:02:26 by kloh              #+#    #+#             */
/*   Updated: 2021/03/09 04:05:46 by kloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int results;

	if (power < 0)
		return (0);
	results = 1;
	while (power > 0)
	{
		results *= nb;
		power--;
	}
	return (results);
}
