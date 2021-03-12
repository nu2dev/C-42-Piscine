/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:20:24 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 18:58:56 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig3 = '0';
	while (dig3 < '8')
	{
		dig2 = dig3 + 1;
		while (dig2 < '9')
		{
			dig1 = dig2 + 1;
			while (dig1 <= '9')
			{
				write(1, &dig3, 1);
				write(1, &dig2, 1);
				write(1, &dig1, 1);
				if (!(dig3 == '7' && dig2 == '8' && dig1 == '9'))
					write(1, ", ", 2);
				dig1++;
			}
			dig2++;
		}
		dig3++;
	}
	return ;
}
