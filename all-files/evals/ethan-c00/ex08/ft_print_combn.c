/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaw <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:25:57 by elaw              #+#    #+#             */
/*   Updated: 2021/03/04 14:27:37 by elaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int a;
	int b;

	a = 0;
	b = a + 1;
	while (a <= 8)
	{
		while (b <= 9)
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_combn(2);
	return (0);
}
