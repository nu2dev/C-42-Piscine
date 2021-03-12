/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:46:23 by aazrin            #+#    #+#             */
/*   Updated: 2021/03/04 15:08:44 by aazrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);
static void		ft_print_hexa(char np);

void			ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			if (str[i] < 16)
			{
				ft_putchar('0');
			}
			ft_print_hexa(str[i]);
		}
		i++;
	}
}

static void		ft_print_hexa(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 16)
	{
		ft_print_hexa(c / 10);
		ft_print_hexa(c % 10);
	}
	else
	{
		ft_putchar(hex[(int)c]);
	}
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}
