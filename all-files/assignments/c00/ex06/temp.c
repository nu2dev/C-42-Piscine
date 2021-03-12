/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:34:17 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 15:18:32 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combo2(void)
{
	int		i;
	int		j;
	char	*numarr;
	
	numarr = "0123456789";
	i = 0;
	j = 0;

	// write(1, "00 01", 5);
	while (i >= 0 && i <= 9)
	{
		while (j >= 0 && j <= 9)
		{
			write(1, &numarr[i], 1);
			write(1, &numarr[i], 1);
			write(1, " ", 1);
			write(1, &numarr[j], 1);	
			write(1, &numarr[j], 1);	
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
		if (j == 9 || i != 98) // only  for testing
			write(1, "\n", 1);	// only for testing
		j = 0;
	}
	return ;
}

int		main(void)
{
	write(1, "start\n\n", 7);
	ft_print_combo2();
	return (0);
}
