/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 22:30:57 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/10 22:33:31 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				not_found;

	i = (unsigned int)nb;
	not_found = 1;
	while (not_found)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
