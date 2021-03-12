/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:09:56 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/24 02:19:40 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	to_hex(int i)
{
	if (i > 9)
		return (i - 10 + 'a');
	else
		return (i + '0');
}

void	print_non_printable_char(char c)
{
	int char_value;
	int	hex_1;
	int	hex_2;

	char_value = c;
	char_value = (char_value < 0) ? char_value + 256 : char_value;
	hex_1 = char_value / 16;
	hex_2 = char_value % 16;
	ft_putchar('\\');
	ft_putchar(to_hex(hex_1));
	ft_putchar(to_hex(hex_2));
}

void	ft_putstr_non_printable(char *str)
{
	int idx;

	idx = -1;
	while (str[++idx] != '\0')
	{
		if (str[idx] >= ' ' && str[idx] <= '~')
			ft_putchar(str[idx]);
		else
			print_non_printable_char(str[idx]);
	}
}
