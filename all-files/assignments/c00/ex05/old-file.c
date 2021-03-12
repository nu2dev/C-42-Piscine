/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:20:24 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 18:26:57 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_comb(void)
{
	int		dig1;
	int 	dig2;
	int 	dig3;
	char 	*numarr;

	numarr = "01234567890";
	dig3 = 0;
	dig2 = 1;
	dig1 = 2;
	while (dig3 >= 0 && dig3 <= 9)
	{
		while (dig2 >= 0 && dig2 <= 9)
		{
			while (dig1 >= 0 && dig1 <= 9)
			{
				if (dig1 != dig2 && dig2 != dig3 && dig1 != dig3
						&& dig1 > dig2 && dig2 > dig3)
				{
					ft_putchar(numarr[dig3]);
					ft_putchar(numarr[dig2]);
					ft_putchar(numarr[dig1]);
					if (!(dig3 == 7 && dig2 == 8 && dig1 == 9))
						write(1, ", ", 2);
				}
				dig1++;
			}
			dig1 = 0;
			dig2++;
		}
		dig2 = 0;
		dig3++;
	}
	return ;
}
