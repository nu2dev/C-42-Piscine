/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:23:43 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/04 13:55:16 by vichandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char vc)
{
	write(1, &vc, 1);
}

char	printnum(char n1, int n2)
{
	char pn;

	if (n2 == 1)
	{
		pn = n1 / 10 + '0';
	}
	else
	{
		pn = n1 % 10 + '0';
	}
	return (pn);
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;

	n1 = -1;
	while (n1++ < 99)
	{
		n2 = n1;
		while (n2++ < 99)
		{
			if (!(n1 == 0 && n2 == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(printnum(n1, 1));
			ft_putchar(printnum(n1, 0));
			ft_putchar(' ');
			ft_putchar(printnum(n2, 1));
			ft_putchar(printnum(n2, 0));
		}
	}
}
