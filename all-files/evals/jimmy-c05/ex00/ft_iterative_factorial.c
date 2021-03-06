/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:23:28 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/08 23:24:06 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	if (nb < 0)
		return (0);
	fac = 1;
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
