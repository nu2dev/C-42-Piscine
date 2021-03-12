/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kloh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 04:22:10 by kloh              #+#    #+#             */
/*   Updated: 2021/03/09 17:14:18 by kloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		Uses overflow to find the largest square root (limit) before MAX_INT
*/

int		ft_is_prime(int nb)
{
	int		limit;
	int		root;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	limit = 1;
	while (limit * limit > 0)
		limit++;
	root = 2;
	while (root * root <= nb && root < limit)
	{
		if (nb % root == 0)
			return (0);
		root++;
	}
	return (1);
}
