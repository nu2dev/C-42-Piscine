/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:21:58 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/23 16:31:42 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned long int c, unsigned int pos)
{
	const int	digits = pos;
	char		output;

	if (pos > 1)
	{
		print_hex(c / 16, pos - 1);
		print_hex(c % 16, 1);
	}
	else
	{
		output = c % 16;
		if (output > 9)
			output = output - 10 + 'a';
		else
			output = output + '0';
		write(1, &output, 1);
	}
}

void	print_contents(char *content)
{
	int iter;

	iter = -1;
	while (++iter < 16)
	{
		print_hex((unsigned long int)*(content + iter), 2);
		if (iter % 2 == 1)
			ft_putchar(' ');
	}
}

void	print_readable(char *content)
{
	int iter;

	iter = -1;
	while (++iter < 16)
	{
		if (*(content + iter) >= ' ' && *(content + iter) <= '~')
			ft_putchar(*(content + iter));
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		idx;

	idx = 0;
	while (idx < size * 16)
	{
		print_hex((unsigned long int)addr + idx, 16);
		ft_putchar(':');
		ft_putchar(' ');
		print_contents(((char *)addr + idx));
		print_readable(((char *)addr + idx));
		ft_putchar('\n');
		idx += 16;
	}
	return (addr);
}
