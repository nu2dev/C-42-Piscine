/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:46:15 by jchoong           #+#    #+#             */
/*   Updated: 2021/03/05 18:21:18 by jchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = to_find;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == ptr[j])
		{
			if (ptr[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
