/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:12:02 by rramli            #+#    #+#             */
/*   Updated: 2021/03/01 21:12:05 by rramli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	int m;

	m = n;
	if (m < 0)
	{
		ft_putchar('-');
		m = n * -1;
	}
	if (m >= 10)
	{
		ft_putnbr(m / 10);
		ft_putnbr(m % 10);
	}
	else
	{
		ft_putnbr(m + '0');
	}
}
