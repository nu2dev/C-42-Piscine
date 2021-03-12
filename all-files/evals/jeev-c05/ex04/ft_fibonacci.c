/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsagathe <jsagathe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 03:01:22 by jsagathe          #+#    #+#             */
/*   Updated: 2021/03/10 04:02:55 by jsagathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int x;

	if (index < 0)
		return (-1);
	else if (index == 0)
		x = 0;
	else if (index == 1)
		x = 1;
	else
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (x);
}
