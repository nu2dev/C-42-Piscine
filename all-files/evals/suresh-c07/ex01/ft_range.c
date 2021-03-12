/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:22:22 by schetty           #+#    #+#             */
/*   Updated: 2021/03/04 22:22:22 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*array;

	if (min < max)
	{
		size = max - min;
		array = (int*)malloc(sizeof(*array) * (size + 1));
		if (array != NULL)
		{
			i = -1;
			while (++i < size)
				array[i] = min + i;
			array[i] = '\0';
			return (array);
		}
	}
	return (NULL);
}
