/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:49:40 by jking-ye          #+#    #+#             */
/*   Updated: 2021/03/01 22:47:50 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	printmin(void)
{
	write(1, "-", 1);
	ft_putchar(2);
	ft_putchar(1);
	ft_putchar(4);
	ft_putchar(7);
	ft_putchar(4);
	ft_putchar(8);
	ft_putchar(3);
	ft_putchar(6);
	ft_putchar(4);
	ft_putchar(8);
}

void	ft_putnbr(int n)
{
	char c;

	c = '-';
	if (n == -2147483648)
	{
		printmin();
	}
	else
	{
		if (n < 0)
		{
			write(1, &c, 1);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar(n);
		}
	}
}
