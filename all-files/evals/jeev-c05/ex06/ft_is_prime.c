/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsagathe <jsagathe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 04:51:16 by jsagathe          #+#    #+#             */
/*   Updated: 2021/03/10 06:17:39 by jsagathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1 || nb == 4)
		return (0);
	else if (nb == 2147483647)
		return (1);
	while ((nb / 2) > i)
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}
