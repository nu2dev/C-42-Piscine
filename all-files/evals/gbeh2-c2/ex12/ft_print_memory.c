/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:21:58 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/24 17:45:41 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned long int c, unsigned int pos)
{
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

void	print_contents(char *content, unsigned int bytes)
{
	unsigned int	iter;

	iter = 0;
	while (iter < 16)
	{
		if (iter < bytes)
			print_hex((unsigned long int)*(content + iter), 2);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (iter % 2 == 1)
			ft_putchar(' ');
		iter++;
	}
}

void	print_readable(char *content, unsigned int bytes)
{
	unsigned int	iter;

	iter = 0;
	while (iter < bytes)
	{
		if (*(content + iter) >= ' ' && *(content + iter) <= '~')
			ft_putchar(*(content + iter));
		else
			ft_putchar('.');
		iter++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	idx;
	unsigned int	bytes;

	idx = 0;
	while (idx < size)
	{
		print_hex((unsigned long int)addr + idx, 16);
		ft_putchar(':');
		ft_putchar(' ');
		bytes = size - idx < 16 ? size - idx : 16;
		print_contents((char *)(addr + idx), bytes);
		print_readable((char *)(addr + idx), bytes);
		ft_putchar('\n');
		idx += 16;
	}
	return (addr);
}
