/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vichandr <vichandr@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:09:20 by vichandr          #+#    #+#             */
/*   Updated: 2021/03/05 10:09:35 by vichandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cnt;
	int tmps;

	cnt = 0;
	while (cnt < --size)
	{
		tmps = tab[cnt];
		tab[cnt++] = tab[size];
		tab[size] = tmps;
	}
}
