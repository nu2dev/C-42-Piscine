/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:16:00 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/05 12:51:40 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char vc)
{
	write(1, &vc, 1);
}

void	ft_print_screen(int *p, int len)
{
	int d;
	int e;

	d = 1;
	e = 1;
	while (d < len)
	{
		if (p[d - 1] >= p[d])
			e = 0;
		d++;
	}
	if (e)
	{
		d = 0;
		while (d < len)
			ft_putchar(p[d++] + '0');
		if (p[0] < (10 - len))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int c;
	int arr[n];

	c = 0;
	if (n == 1)
		while (c < 10)
			ft_putchar(c++ + '0');
	while (c < n)
		arr[c++] = 0;
	while (arr[0] <= (10 - n) && n > 1)
	{
		ft_print_screen(arr, n);
		arr[n - 1]++;
		c = n;
		while (c && n > 1)
			c--;
			if (arr[c] > 9)
				arr[c - 1]++;
				arr[c] = 0;
	}
}
