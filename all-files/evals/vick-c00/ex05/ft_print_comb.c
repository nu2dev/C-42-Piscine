/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:53:19 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/04 14:07:12 by vichandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char vc)
{
	write(1, &vc, 1);
}

void	ft_print_comb(void)
{
	char j;
	char e;
	char f;

	j = '0' - 1;
	while (j++ < '7')
	{
		e = j;
		while (e++ < '8')
		{
			f = e;
			while (f++ < '9')
			{
				if (!(j == '0' && e == '1' && f == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(j);
				ft_putchar(e);
				ft_putchar(f);
			}
		}
	}
}
