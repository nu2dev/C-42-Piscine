/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:08:43 by hloke             #+#    #+#             */
/*   Updated: 2021/03/06 22:18:35 by hloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_base(char s, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == s)
			return (i);
		i += 1;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int len)
{
	int i;
	int sum;
	int sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i += 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i += 1;
	}
	while (str[i])
	{
		if (find_base(str[i], base) > 0)
			sum = sum * len + find_base(str[i], base);
		else
			break ;
		i += 1;
	}
	return (sum * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int sum;

	i = 0;
	sum = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
			if (base[j++] == base[i])
				return (0);
		i += 1;
	}
	if (i < 2)
		return (0);
	sum = ft_atoi(str, base, i);
	return (sum);
}
