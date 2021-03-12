/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisim <yisim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:12:05 by yisim             #+#    #+#             */
/*   Updated: 2021/03/09 23:40:00 by yisim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
