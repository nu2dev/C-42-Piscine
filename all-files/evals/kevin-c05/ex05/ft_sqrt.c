/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kloh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 04:22:10 by kloh              #+#    #+#             */
/*   Updated: 2021/03/09 17:13:44 by kloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		Uses overflow to find the largest square root (limit) before MAX_INT
**		return (0) for numbers between MAX_INT
**		& the largest nb with a perfect square root before that
**		return (0) for negative ints
*/

int		ft_sqrt(int nb)
{
	int		limit;
	int		root;
	int		temp;

	limit = 1;
	while (limit * limit > 0)
		limit++;
	root = 0;
	while (root < limit)
	{
		temp = root * root;
		if (temp == nb)
			return (root);
		else if (temp > nb)
			return (0);
		root++;
	}
	return (0);
}
