/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:46:30 by ychow             #+#    #+#             */
/*   Updated: 2021/03/03 02:20:06 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48 - 1;
	while (++i <= 55)
	{
		j = i;
		while (++j <= 56)
		{
			k = j;
			while (++k <= 57)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int main (void)
{
	ft_print_comb();
	return (0);
}
