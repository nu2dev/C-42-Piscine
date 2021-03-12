/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jking-ye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:50:10 by jking-ye          #+#    #+#             */
/*   Updated: 2021/03/02 15:07:07 by jking-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int nums[size];
	int countdown;
	int countup;

	countup = 0;
	countdown = size - 1;
	while (countdown >= 0)
	{
		nums[countdown] = tab[countup];
		countup++;
		countdown--;
	}
	countup = 0;
	while (countup < size)
	{
		tab[countup] = nums[countup];
		countup++;
	}
}
