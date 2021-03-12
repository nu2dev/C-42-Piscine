/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tong <tong@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:45:33 by tong              #+#    #+#             */
/*   Updated: 2021/03/06 14:46:58 by tong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexdec(unsigned char hex)
{
	int mod;
	int div;

	mod = hex % 16;
	if (mod < 10)
		mod = mod + 48 + 32;
	else
		mod = mod + 55 + 32;
	div = hex / 16;
	ft_putchar('\\');
	if (div == 0)
		ft_putchar('0');
	else
		ft_putchar(div);
	ft_putchar(mod);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*string;

	string = (unsigned char *)str;
	i = 0;
	while (string[i] != '\0')
	{
		if ((string[i] >= 0 && string[i] <= 31) || \
				(string[i] >= 128 && string[i] <= 255))
		{
			hexdec(string[i]);
		}
		else
		{
			ft_putchar(string[i]);
		}
		i++;
	}
}
