/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:58:53 by gbeh              #+#    #+#             */
/*   Updated: 2021/03/03 17:26:06 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;
	unsigned int	idx;

	idx = 0;
	while (s1[idx] != '\0' || s2[idx] != '\0')
	{
		c1 = s1[idx];
		c2 = s2[idx++];
		if ((c1 - c2) != 0)
			return (c1 - c2);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		idx;
	int		next;

	idx = 1;
	temp = "";
	while (idx < argc)
	{
		next = idx + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[idx], argv[next]) > 0)
			{
				temp = argv[idx];
				argv[idx] = argv[next];
				argv[next] = temp;
			}
			next++;
		}
		write(1, argv[idx], ft_strlen(argv[idx]));
		write(1, "\n", 1);
		idx++;
	}
}
