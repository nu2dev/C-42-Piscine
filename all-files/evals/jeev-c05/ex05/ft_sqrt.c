/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsagathe <jsagathe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 03:49:37 by jsagathe          #+#    #+#             */
/*   Updated: 2021/03/10 19:53:34 by jsagathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;

	x = 1;
	if (nb == 1)
		return (1);
	while (nb > 1 && x <= 46340)
	{
		if ((nb / x) == x && (nb % x) == 0)
			return (x);
		x++;
	}
	return (0);
}
