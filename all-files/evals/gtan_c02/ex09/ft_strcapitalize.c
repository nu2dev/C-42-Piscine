/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gatan <gatan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 07:25:01 by gatan             #+#    #+#             */
/*   Updated: 2021/02/23 22:11:54 by gatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123) \
			|| (str[i] > 48 && str[i] < 58))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
			j = i + 1;
			while ((str[j] > 64 && str[j] < 91) || (str[j] > 96 && \
					str[j] < 123) || (str[j] > 48 && str[j] < 58))
			{
				if (str[j] > 64 && str[j] < 91)
					str[j] = str[j] + 32;
				j++;
			}
			i = j;
		}
		i++;
	}
	return (str);
}
