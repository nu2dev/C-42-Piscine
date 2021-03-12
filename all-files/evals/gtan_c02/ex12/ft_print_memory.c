/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatan <gatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 02:33:50 by gatan             #+#    #+#             */
/*   Updated: 2021/02/24 15:29:57 by gatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printhex(char c)
{
	int		negchar;
	char	hex1;
	char	hex2;

	if (c < 0)
	{
		negchar = (-128 - (c)) * (-1) + 128;
		hex1 = negchar / 16;
		hex2 = negchar % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		ft_putchar(hex1 + 48);
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + 48);
	else
		ft_putchar(hex2 + 87);
}

void	printaddr(void *addr)
{
	char	slot[15];
	long	add_loc;
	int		i;

	add_loc = (long)addr;
	i = 0;
	while (add_loc > 0)
	{
		slot[i] = add_loc % 16;
		if (slot[i] < 10)
			slot[i] += 48;
		else
			slot[i] += 87;
		add_loc = add_loc / 16;
		i++;
	}
	while (i < 15)
	{
		slot[i] = 48;
		i++;
	}
	while (--i >= 0)
		ft_putchar(slot[i]);
}

void	printcols(void *addr, int size)
{
	int		i;
	int		slots;
	char	*str;

	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		printhex(str[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	slots = ((16 - size) * 2) + (19 - size) / 2;
	while (--slots > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	character;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			character = 16;
			size = size - 16;
		}
		else
		{
			character = size;
			size = 0;
		}
		printaddr(addr + offset);
		ft_putchar(':');
		ft_putchar(' ');
		printcols(addr + offset, character);
		ft_putchar('\n');
		offset = offset + 16;
	}
	return (addr);
}
