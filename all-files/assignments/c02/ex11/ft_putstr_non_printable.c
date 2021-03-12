/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:54:00 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/07 16:20:40 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	print_hex(unsigned char x)
{
	char	hex1;
	char	hex2;
	int		neg_char;

	if (x < 0)
	{
		printf("\nx=%d\n", x);
		neg_char = (128 - (x)) * -1 + 128;
		printf("\nx=%d\n", neg_char);
		hex1 = neg_char / 16;
		hex2 = neg_char % 16;
	}
	else
	{
		hex1 = x / 16;
		hex2 = x % 16;
	}
	ft_putchar('\\');
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + ('a' - 10));
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + ('a' - 10));
	return ;
}

void	ft_putstr_non_printable(char *str)
{
	char *char_ptr;

	char_ptr = str;
	while (*char_ptr != 0)
	{
		if (*char_ptr <= 31 || *char_ptr == 127)
			print_hex(*char_ptr);
		else
			write(1, char_ptr, 1);
		char_ptr++;
	}
	return ;
}

int main(void)
{
	ft_putstr_non_printable("\n45348\0\f\thh");
	ft_putstr_non_printable("\x01\x1F\x7F\x8F\xFF");
	return (0);
}
