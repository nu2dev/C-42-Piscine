/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:31:02 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/08 11:38:53 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	m;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	m = 1;
	while (power > 0)
	{
		m = m * nb;
		power--;
	}
	return (m);
}
