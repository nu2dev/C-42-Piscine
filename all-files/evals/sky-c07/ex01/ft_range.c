/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyeow <kyeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:00:43 by kyeow             #+#    #+#             */
/*   Updated: 2021/03/11 16:03:02 by kyeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		count;
	int		*tab;

	count = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	while (count < max - min)
	{
		tab[count] = min + count;
		count++;
	}
	return (tab);
}
