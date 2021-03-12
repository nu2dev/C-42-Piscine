/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:21:39 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/05 10:11:45 by vichandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int tmps;

	a = 0;
	while (a++ < size)
	{
		b = 0;
		while (b++ < size)
		{
			if (tab[b - 1] > tab[b])
			{
				tmps = tab[b - 1];
				tab[b - 1] = tab[b];
				tab[b] = tmps;
			}
		}
	}
}
