/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazrin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:17:42 by aazrin            #+#    #+#             */
/*   Updated: 2021/03/04 10:48:12 by aazrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		first_word(char c);
int		is_number(char c);
int		is_lowercase(char c);
int		is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (first_word(str[i]))
		{
			if (word == 1 && is_lowercase(str[i]))
				str[i] = str[i] - 32;
			else if (word == 0 && is_uppercase(str[i]))
				str[i] = str[i] + 32;
			word = 0;
		}
		else
		{
			word = 1;
		}
		i++;
	}
	return (str);
}

int		first_word(char c)
{
	if (is_number(c))
	{
		return (1);
	}
	if (is_lowercase(c))
	{
		return (1);
	}
	if (is_uppercase(c))
	{
		return (1);
	}
	return (0);
}

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
