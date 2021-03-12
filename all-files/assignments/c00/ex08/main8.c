/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:59:30 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/03 03:02:27 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

int main()
{
	ft_print_combn(4);
	write(1, "\n\n", 2);
	ft_print_combn(1);
	write(1, "\n\n", 2);
	ft_print_combn(11);
	write(1, "\n\n", 2);
	ft_print_combn(0);
	write(1, "\n\n", 2);
	ft_print_combn('\0');
	write(1, "\n\n", 2);
	// 					ft_putnbr(6783);	
	// 					write(1, "\n\n", 2);	
	// 					ft_putnbr(8);	
	// 					write(1, "\n\n", 2);
 					return (0);
}


