/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:59:30 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/01 22:27:50 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n\n", 2);
	ft_putnbr(-2147483657);
	write(1, "\n\n", 2);
	ft_putnbr(2147483647);
	write(1, "\n\n", 2);
	ft_putnbr(-6);	
	write(1, "\n\n", 2);	
	// 					ft_putnbr(6783);	
	// 					write(1, "\n\n", 2);	
	// 					ft_putnbr(8);	
	// 					write(1, "\n\n", 2);
					ft_putnbr(42);	
 					return (0);
}


