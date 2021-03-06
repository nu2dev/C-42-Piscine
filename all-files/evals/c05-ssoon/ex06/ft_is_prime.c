/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoon <ssoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 00:49:54 by ssoon             #+#    #+#             */
/*   Updated: 2021/03/10 13:07:23 by ssoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int prime;

	prime = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			prime = 0;
		i++;
	}
	if (prime == 0)
		return (0);
	else
		return (1);
}
