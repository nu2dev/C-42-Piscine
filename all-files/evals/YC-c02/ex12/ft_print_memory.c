/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:53:07 by syee-cha          #+#    #+#             */
/*   Updated: 2021/03/02 20:27:42 by syee-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base16;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_addr(void *addr)
{
	char	addr_hex[16];
	long	addr_value;
	int		i;

	addr_value = (long)addr;
	i = 0;
	while (addr_value != 0)
	{
		addr_hex[i] = addr_value % 16;
		if (addr_hex[i] < 10)
			addr_hex[i] += 48;
		else
			addr_hex[i] += 87;
		addr_value = addr_value / 16;
		i++;
	}
	while (i < 16)
	{
		addr_hex[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(addr_hex[i]);
}

void	print_ascii(unsigned char *addr, int char_count)
{
	int				i;
	unsigned char	*ptr;

	ptr = addr;
	i = 0;
	while (i < char_count)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		ft_putchar(g_base16[ptr[i] / 16]);
		ft_putchar(g_base16[ptr[i] % 16]);
		i++;
	}
	while (char_count < 16)
	{
		if (char_count % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		char_count++;
	}
}

void	print_str(void *addr, int char_count)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char*)addr;
	i = 0;
	while (i < char_count)
	{
		if (ptr[i] >= 32 && ptr[i] < 127)
			ft_putchar(ptr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int chars;
	int offset;

	g_base16 = "0123456789abcdef";
	offset = 0;
	chars = 16;
	while (size != 0)
	{
		if (size > 16)
			chars = 16;
		else
			chars = size;
		print_addr(addr + offset);
		write(1, ": ", 2);
		print_ascii(addr + offset, chars);
		ft_putchar(' ');
		print_str(addr + offset, chars);
		ft_putchar('\n');
		size = size - chars;
		offset = offset + 16;
	}
	return (addr);
}
