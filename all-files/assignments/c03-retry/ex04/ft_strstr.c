/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:31:56 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/08 18:49:01 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		j = 0;
		while (*(str + j) == *(to_find + j))
		{
			if (*(to_find + j + 1) == '\0')
				return (str);
			j++;
		}
		str++;
	}
	return (0);
}
