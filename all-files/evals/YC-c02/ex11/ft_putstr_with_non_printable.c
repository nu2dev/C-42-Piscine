/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:26:00 by syee-cha          #+#    #+#             */
/*   Updated: 2021/03/02 20:20:24 by syee-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char value)
{
	int					i;
	int					rem;
	unsigned char		hexa[4];

	i = 0;
	if (value >= 0 && value <= 15)
		ft_putchar('0');
	while (value != 0)
	{
		rem = value % 16;
		if (rem < 10)
			hexa[i] = rem + 48;
		else
			hexa[i] = rem + 55 + 32;
		i++;
		value = value / 16;
	}
	while (--i >= 0)
		ft_putchar(hexa[i]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
