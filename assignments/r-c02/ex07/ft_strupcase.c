/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:38:01 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/05 10:57:24 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
