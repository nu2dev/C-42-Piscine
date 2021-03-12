/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsagathe <jsagathe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 01:47:19 by jsagathe          #+#    #+#             */
/*   Updated: 2021/03/10 02:27:05 by jsagathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int x;

	i = 1;
	x = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > i)
	{
		x = x * (nb - i);
		i++;
	}
	return (x);
}
