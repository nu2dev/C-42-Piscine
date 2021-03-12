/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:59:24 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/02 19:13:45 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *num, int n)
{
	int		i;
	char	c;

	i = 0;
	while (++i < n)
		if (num[i - 1] >= num[i])
			return ;
	i = -1;
	while (++i < n)
	{
		c = num[i] + '0';
		write(1, &c, 1);
	}
	if (num[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	num[10];

	if (n >= 10 || n <= 0)
		return ;
	i = -1;
	while (++i < n)
		num[i] = i;
	while (n >= 1 && num[0] <= (10 - n))
	{
		print(num, n);
		if (n == 10)
			break ;
		num[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (num[i] > 9)
			{
				num[i - 1]++;
				num[i] = 0;
			}
		}
	}
}
