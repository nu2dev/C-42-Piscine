/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:35:43 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/04 14:06:08 by vichandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char vc)
{
	write(1, &vc, 1);
}

void	ft_is_negative(int no)
{
	if (no < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
