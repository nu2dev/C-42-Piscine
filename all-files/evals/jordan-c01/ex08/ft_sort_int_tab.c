/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_ta.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:29:04 by jking-ye          #+#    #+#             */
/*   Updated: 2021/03/02 19:05:36 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		comparei(int a, int b)
{
	if (a > b)
	{
		return (1);
	}
	return (0);
}

int		issorted(int *tab, int size)
{
	int i;

	i = 0;
	while (i < (size - 1))
	{
		if ((comparei(tab[i], tab[i + 1])) == 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	swap(int *tab, int n)
{
	int num;

	num = tab[n];
	tab[n] = tab[n + 1];
	tab[n + 1] = num;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		n;
	int		b;

	n = 0;
	b = 0;
	while (b == 0)
	{
		if ((issorted(tab, size)) == 0)
		{
			n = 0;
			while (n < (size - 1))
			{
				if ((comparei(tab[n], tab[n + 1])) == 1)
				{
					swap(tab, n);
				}
				n++;
			}
		}
		else
		{
			b = 1;
		}
	}
}
