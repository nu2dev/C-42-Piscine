/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeh <gbeh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:29:14 by gbeh              #+#    #+#             */
/*   Updated: 2021/02/23 20:53:52 by gbeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

char	ft_strlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c -= 'A' - 'a';
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	word;
	int idx;

	idx = 0;
	word = 1;
	str[idx] = ft_strupcase(str[idx]);
	while (str[++idx] != '\0')
	{
		str[idx] = word ? ft_strupcase(str[idx]) : ft_strlowcase(str[idx]);
		word = str[idx] == ' ';
	}
	return (str);
}
