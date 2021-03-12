/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:34:17 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 18:12:57 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_4dig(int a, int b, int c, int d)
{
	char	*numarr;

	numarr = "0123456789";
	write(1, &numarr[a], 1);
	write(1, &numarr[b], 1);
	write(1, " ", 1);
	write(1, &numarr[c], 1);
	write(1, &numarr[d], 1);
	return ;
}

void	ft_print_combo2(void)
{
	int		a;
	int		b;
	char	*numarr;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_4dig((a / 10), (a % 10), (b / 10), (b % 10));
			if (a != 98 && b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
	return ;
}
