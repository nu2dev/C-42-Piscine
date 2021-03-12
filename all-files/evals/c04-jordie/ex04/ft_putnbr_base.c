/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:49:40 by jking-ye          #+#    #+#             */
/*   Updated: 2021/03/09 21:23:17 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base_neg(int n, char *base)
{
	int baselen;

	baselen = len(base);
	if (n < -(baselen))
	{
		ft_putnbr_base_neg((n / baselen), base);
		ft_putnbr_base_neg((n % baselen), base);
	}
	else
		write(1, &(base[-n]), 1);
}

void	printneg(int n, char *base)
{
	write(1, "-", 1);
	ft_putnbr_base_neg(n, base);
}

int		checkbase(char *base)
{
	int baselen;
	int i;
	int j;

	baselen = len(base);
	if (baselen < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int n, char *base)
{
	int baselen;

	baselen = len(base);
	if (checkbase(base) == 1)
	{
		if (n < 0)
		{
			printneg(n, base);
		}
		else
		{
			if (n >= baselen)
			{
				ft_putnbr_base((n / baselen), base);
				ft_putnbr_base((n % baselen), base);
			}
			else
			{
				write(1, &(base[n]), 1);
			}
		}
	}
}
