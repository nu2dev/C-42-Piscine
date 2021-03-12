/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:38:01 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/05 11:34:27 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	*org_str;

	i = 0;
	org_str = str;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
			break ;
		else
			*(str + i) -= ('a' - 'A');
		i++;
	}
	return (org_str);
}

int main (void)
{
	char str[] = "sgdfg BIUHIUN 243/;.]";
	printf("before = %s\n", str);

	printf("After = %s\n", ft_strupcase(str));
}
