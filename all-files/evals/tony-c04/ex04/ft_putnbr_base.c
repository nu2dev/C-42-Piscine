/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:07:33 by hloke             #+#    #+#             */
/*   Updated: 2021/03/06 17:16:43 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	base_change(int nbr, char *base, int len)
{
	if (nbr + 1 > len)
	{
		base_change(nbr / len, base, len);
		nbr %= len;
	}
	ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[j] == '-')
			return ;
		while (base[j])
			if (base[j++] == base[i])
				return ;
		i += 1;
	}
	if (i < 2)
		return ;
	if (nbr > 0)
		base_change(nbr, base, i);
	else
	{
		ft_putchar('-');
		base_change(-nbr, base, i);
	}
}
