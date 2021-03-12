/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:24:10 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/05 02:38:43 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		check;
	char	*org_str;

	org_str = str;
	check = 1;
	while (*str != '\0')
	{
		if (check)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= ('a' - 'A');
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
				*str -= ('A' - 'a');
		}
		check = !((*str >= 'A' && *str <= 'Z') ||
				(*str >= 'a' && *str <= 'z') ||
				(*str >= '0' && *str <= '9'));
		str++;
	}
	return (org_str);
}
