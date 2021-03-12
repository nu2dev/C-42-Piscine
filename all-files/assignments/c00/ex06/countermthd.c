/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:34:17 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 16:59:15 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_4dig(int a, int b, int c ,int d)
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
	int		i; /*counter*/
	int		a;
	int		b;
	int		c;
	int		d;
	char	*numarr;

	i = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (i >= 0 && i <= 9899)
	{
		d = i % 10;
	   	ft_print_4dig(a, b, c, d); 		
		if (d + 1 == 10) 
		{
			c++;
			if (c  == 10)
			{
				c = 0;
				b++;
				if (b  == 10)
				{
					b = 0;
					a++;
				}
			}
		}	
		if (i != 9899)
			write(1, ", ", 2);
		if (d == 9) // only  for testing
			write(1, "\n", 1);	// only for testing
		i++;
	}
	return ;
}

int		main(void)
{
	write(1, "start\n\n", 7);
	ft_print_combo2();
	write(1, "\n\nEnd", 7);
	return (0);
}
