/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:56:37 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/04 13:56:56 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int factorial, int number)
{
	factorial *= number--;
	if (number > 0)
		return (ft_recursive(factorial, number));
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive(fac, nb));
}
