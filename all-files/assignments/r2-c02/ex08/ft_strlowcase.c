/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unarasim <unarasim@student.42kl.edu>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:00:32 by unarasim          #+#    #+#             */
/*   Updated: 2021/03/05 11:44:40 by unarasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*org_str;

	org_str = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str -= ('A' - 'a');
		str++;
	}
	return (org_str);
}
