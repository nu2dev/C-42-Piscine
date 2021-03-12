/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:56:49 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/05 13:09:08 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_hexa_print(unsigned char x)
{
	char	hex1;
	char	hex2;
	int		neg_char;

	if (x < 0)
	{
		neg_char = (128 - (x)) * -1 + 128;
		hex1 = neg_char / 16;
		hex2 = neg_char % 16;
	}
	else
	{
		hex1 = x / 16;
		hex2 = x % 16;
	}
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

void	ft_addr_print(void *addr)
{
	char	addr_c[16];
	long	addr_l;
	int		i;

	addr_l = (long)addr;
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16;
		if (addr_c[i] < 10)
			addr_c[i] += '0';
		else
			addr_c[i] += ('a' - 10);
		addr_l = addr_l / 16;
		i++;
	}
	while (i < 16)
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(addr_c[i]);
	return ;
}

void	ft_line_print(void *addr, int size)
{
	int		i;
	int		space2print;
	char	*addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_hexa_print(addr_c[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	space2print = ((16 - size) * 2) + (19 - size) / 2;
	while (--space2print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
	return ;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	c2p;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			c2p = 16;
			size -= 16;
		}
		else
		{
			c2p = size;
			size = 0;
		}
		ft_addr_print(addr + offset);
		write(1, ": ", 2);
		ft_line_print(addr + offset, c2p);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
